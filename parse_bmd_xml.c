#include<stdio.h>
#include<stdlib.h>
#include "db_access.h"
#include "parsing.h"

int main() {
bmd b;

b = parse_bmd_xml("bmd.xml") ;
//printf("%s\n",b.payload);
queue_the_request(b);
return 0;
}
