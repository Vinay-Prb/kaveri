/*#include<stdio.h>
#include<curl/curl.h>

#undef DISABLE_SSH_AGENT
struct FtpFile {
    const char *filename;
    FILE *stream;
};

static size_t my_fwrite(void *buffer,size_t size,size_t nmemb,void *stream)
{
    struct FtpFile *out =(struct FtpFile *)stream;
    if(!out->stream)
    {
        //opening file for writing
        out->stream=fopen(out->filename,"wb");
        if(!out->stream)
        {
            return -1;
        }
        
    }
    return fwrite(buffer,size,nmemb,out->stream);

    
}
int main(void)
{
    CURL *curl;
    CURLcode res;
    struct FtpFile ftpfile={
    //enter a file name 
    "abc.exmaple",
    NUll
    };
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl=curl_easy_init();
    if(curl)
    {
        //enter a valid stfp url
        curl_easy_setopt(curl,CURLOPT_URL,"sftp://enterhere.txt");
        //call back function
        curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION,my_fwrite);
        //pointer to the struct
        curl_easy_setopt(curl,CURLOPT_WRITEDATA,&ftpfile);

        #ifndef DISABLE_SSH_AGENT
        curl_easy_setopt(curl,CURLOPT_SSH_AUTH_TYPES,CURLSSH_AUTH_AGENT);
        #endif

        //debug output
        curl_easy_setopt(curl,CURLOPT_VERBOSE,1L);

        res=curl_easy_perform(curl);

        //cleaning
        curl_easy_cleanup(curl);

        if(CURLE_OK!=res)
        {
            //failing
            frpinrf(stderr,"curl told us %d\n",res);
        }

        }
        if(ftpfile.stream)
            fclose(stpfile.stream); //closed the file

        curl_global_cleanup();
        return 0;


    }
}
}
*/