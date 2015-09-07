#include "config.h"
#include "qemu-common.h"
#include "gdbstub.h"
static const char xml_feature_cf_core_xml[] = {
  '<', '?', 'x', 'm', 'l', ' ', 'v', 'e', 'r', 's', 
   'i', 'o', 'n', '=', '"', '1', '.', '0', '"', '?', 
   '>', '\n', 
  '<', '!', '-', '-', ' ', 'C', 'o', 'p', 'y', 'r', 
   'i', 'g', 'h', 't', ' ', '(', 'C', ')', ' ', '2', 
   '0', '0', '8', ' ', 'F', 'r', 'e', 'e', ' ', 'S', 
   'o', 'f', 't', 'w', 'a', 'r', 'e', ' ', 'F', 'o', 
   'u', 'n', 'd', 'a', 't', 'i', 'o', 'n', ',', ' ', 
   'I', 'n', 'c', '.', '\n', 
  '\n', 
  ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'p', 'y', 'i', 
   'n', 'g', ' ', 'a', 'n', 'd', ' ', 'd', 'i', 's', 
   't', 'r', 'i', 'b', 'u', 't', 'i', 'o', 'n', ' ', 
   'o', 'f', ' ', 't', 'h', 'i', 's', ' ', 'f', 'i', 
   'l', 'e', ',', ' ', 'w', 'i', 't', 'h', ' ', 'o', 
   'r', ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', ' ', 
   'm', 'o', 'd', 'i', 'f', 'i', 'c', 'a', 't', 'i', 
   'o', 'n', ',', '\n', 
  ' ', ' ', ' ', ' ', ' ', 'a', 'r', 'e', ' ', 'p', 
   'e', 'r', 'm', 'i', 't', 't', 'e', 'd', ' ', 'i', 
   'n', ' ', 'a', 'n', 'y', ' ', 'm', 'e', 'd', 'i', 
   'u', 'm', ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', 
   ' ', 'r', 'o', 'y', 'a', 'l', 't', 'y', ' ', 'p', 
   'r', 'o', 'v', 'i', 'd', 'e', 'd', ' ', 't', 'h', 
   'e', ' ', 'c', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 
   't', '\n', 
  ' ', ' ', ' ', ' ', ' ', 'n', 'o', 't', 'i', 'c', 
   'e', ' ', 'a', 'n', 'd', ' ', 't', 'h', 'i', 's', 
   ' ', 'n', 'o', 't', 'i', 'c', 'e', ' ', 'a', 'r', 
   'e', ' ', 'p', 'r', 'e', 's', 'e', 'r', 'v', 'e', 
   'd', '.', ' ', ' ', '-', '-', '>', '\n', 
  '<', '!', 'D', 'O', 'C', 'T', 'Y', 'P', 'E', ' ', 
   'f', 'e', 'a', 't', 'u', 'r', 'e', ' ', 'S', 'Y', 
   'S', 'T', 'E', 'M', ' ', '"', 'g', 'd', 'b', '-', 
   't', 'a', 'r', 'g', 'e', 't', '.', 'd', 't', 'd', 
   '"', '>', '\n', 
  '<', 'f', 'e', 'a', 't', 'u', 'r', 'e', ' ', 'n', 
   'a', 'm', 'e', '=', '"', 'o', 'r', 'g', '.', 'g', 
   'n', 'u', '.', 'g', 'd', 'b', '.', 'c', 'o', 'l', 
   'd', 'f', 'i', 'r', 'e', '.', 'c', 'o', 'r', 'e', 
   '"', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '0', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '1', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '2', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '3', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '4', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '5', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '6', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'd', '7', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'a', '0', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'a', '1', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'a', '2', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'a', '3', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'a', '4', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'a', '5', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 's', 'p', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'd', 'a', 't', 'a', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'p', 's', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', '/', 
   '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'p', 'c', '"', ' ', 'b', 'i', 't', 
   's', 'i', 'z', 'e', '=', '"', '3', '2', '"', ' ', 
   't', 'y', 'p', 'e', '=', '"', 'c', 'o', 'd', 'e', 
   '_', 'p', 't', 'r', '"', '/', '>', '\n', 
  '\n', 
  '<', '/', 'f', 'e', 'a', 't', 'u', 'r', 'e', '>', 
   '\n', 
  0 };
#include "config.h"
#include "qemu-common.h"
#include "gdbstub.h"
static const char xml_feature_cf_fp_xml[] = {
  '<', '?', 'x', 'm', 'l', ' ', 'v', 'e', 'r', 's', 
   'i', 'o', 'n', '=', '"', '1', '.', '0', '"', '?', 
   '>', '\n', 
  '<', '!', '-', '-', ' ', 'C', 'o', 'p', 'y', 'r', 
   'i', 'g', 'h', 't', ' ', '(', 'C', ')', ' ', '2', 
   '0', '0', '8', ' ', 'F', 'r', 'e', 'e', ' ', 'S', 
   'o', 'f', 't', 'w', 'a', 'r', 'e', ' ', 'F', 'o', 
   'u', 'n', 'd', 'a', 't', 'i', 'o', 'n', ',', ' ', 
   'I', 'n', 'c', '.', '\n', 
  '\n', 
  ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'p', 'y', 'i', 
   'n', 'g', ' ', 'a', 'n', 'd', ' ', 'd', 'i', 's', 
   't', 'r', 'i', 'b', 'u', 't', 'i', 'o', 'n', ' ', 
   'o', 'f', ' ', 't', 'h', 'i', 's', ' ', 'f', 'i', 
   'l', 'e', ',', ' ', 'w', 'i', 't', 'h', ' ', 'o', 
   'r', ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', ' ', 
   'm', 'o', 'd', 'i', 'f', 'i', 'c', 'a', 't', 'i', 
   'o', 'n', ',', '\n', 
  ' ', ' ', ' ', ' ', ' ', 'a', 'r', 'e', ' ', 'p', 
   'e', 'r', 'm', 'i', 't', 't', 'e', 'd', ' ', 'i', 
   'n', ' ', 'a', 'n', 'y', ' ', 'm', 'e', 'd', 'i', 
   'u', 'm', ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', 
   ' ', 'r', 'o', 'y', 'a', 'l', 't', 'y', ' ', 'p', 
   'r', 'o', 'v', 'i', 'd', 'e', 'd', ' ', 't', 'h', 
   'e', ' ', 'c', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 
   't', '\n', 
  ' ', ' ', ' ', ' ', ' ', 'n', 'o', 't', 'i', 'c', 
   'e', ' ', 'a', 'n', 'd', ' ', 't', 'h', 'i', 's', 
   ' ', 'n', 'o', 't', 'i', 'c', 'e', ' ', 'a', 'r', 
   'e', ' ', 'p', 'r', 'e', 's', 'e', 'r', 'v', 'e', 
   'd', '.', ' ', ' ', '-', '-', '>', '\n', 
  '<', '!', 'D', 'O', 'C', 'T', 'Y', 'P', 'E', ' ', 
   'f', 'e', 'a', 't', 'u', 'r', 'e', ' ', 'S', 'Y', 
   'S', 'T', 'E', 'M', ' ', '"', 'g', 'd', 'b', '-', 
   't', 'a', 'r', 'g', 'e', 't', '.', 'd', 't', 'd', 
   '"', '>', '\n', 
  '<', 'f', 'e', 'a', 't', 'u', 'r', 'e', ' ', 'n', 
   'a', 'm', 'e', '=', '"', 'o', 'r', 'g', '.', 'g', 
   'n', 'u', '.', 'g', 'd', 'b', '.', 'c', 'o', 'l', 
   'd', 'f', 'i', 'r', 'e', '.', 'f', 'p', '"', '>', 
   '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '0', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '1', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '2', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '3', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '4', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '5', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '6', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', '7', '"', ' ', 'b', 'i', 
   't', 's', 'i', 'z', 'e', '=', '"', '6', '4', '"', 
   ' ', 't', 'y', 'p', 'e', '=', '"', 'f', 'l', 'o', 
   'a', 't', '"', ' ', 'g', 'r', 'o', 'u', 'p', '=', 
   '"', 'f', 'l', 'o', 'a', 't', '"', '/', '>', '\n', 
  '\n', 
  ' ', ' ', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', 'c', 'o', 'n', 't', 'r', 
   'o', 'l', '"', ' ', 'b', 'i', 't', 's', 'i', 'z', 
   'e', '=', '"', '3', '2', '"', ' ', 'g', 'r', 'o', 
   'u', 'p', '=', '"', 'f', 'l', 'o', 'a', 't', '"', 
   '/', '>', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', 's', 't', 'a', 't', 'u', 
   's', '"', ' ', 'b', 'i', 't', 's', 'i', 'z', 'e', 
   '=', '"', '3', '2', '"', ' ', 'g', 'r', 'o', 'u', 
   'p', '=', '"', 'f', 'l', 'o', 'a', 't', '"', '/', 
   '>', ',', '\n', 
  ' ', ' ', '<', 'r', 'e', 'g', ' ', 'n', 'a', 'm', 
   'e', '=', '"', 'f', 'p', 'i', 'a', 'd', 'd', 'r', 
   '"', ' ', 'b', 'i', 't', 's', 'i', 'z', 'e', '=', 
   '"', '3', '2', '"', ' ', 't', 'y', 'p', 'e', '=', 
   '"', 'c', 'o', 'd', 'e', '_', 'p', 't', 'r', '"', 
   ' ', 'g', 'r', 'o', 'u', 'p', '=', '"', 'f', 'l', 
   'o', 'a', 't', '"', '/', '>', '\n', 
  '<', '/', 'f', 'e', 'a', 't', 'u', 'r', 'e', '>', 
   '\n', 
  0 };

const char *const xml_builtin[][2] = {
  { "cf-core.xml", xml_feature_cf_core_xml },
  { "cf-fp.xml", xml_feature_cf_fp_xml },
  { (char *)0, (char *)0 }
};
