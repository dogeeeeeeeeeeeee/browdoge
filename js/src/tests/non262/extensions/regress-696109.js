// |reftest| skip-if(!xulRuntime.shell)
/*
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/licenses/publicdomain/
 * Contributor: Dave Herman <dherman@mozilla.com>
 */

// Bug 696109 - fixed a precedence bug in with/while nodes
Reflect.parse("with({foo})bar");
Reflect.parse("while({foo})bar");

reportCompare(true, true);
