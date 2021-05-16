#include <stdio.h>
#include "../parson/parson.h"

char *parsing()
{
    JSON_Value *rootValue;
    JSON_Object *rootObject, *GDObject, *dataObejct;
    JSON_Array *rootArray;

    rootValue = json_parse_file("info.json");
    rootArray = json_value_get_array(rootValue);
    rootObject = json_array_get_object(rootArray, 0);
    GDObject = json_object_get_object(rootObject, "GraphDriver");
    dataObejct = json_object_get_object(GDObject, "Data");

    char *line = json_object_get_string(dataObejct, "UpperDir");

    return line;
}