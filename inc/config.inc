<?php
/* config.inc Configuration for oAuth Demo project
 *
 * Katy Nicholson, last updated 17/10/2021
 *
 * https://github.com/CoasterKaty
 * https://katytech.blog/
 * https://twitter.com/coaster_katy
 *
 */

// MySQL connection details
define('_MYSQL_HOST', 'localhost');
define('_MYSQL_USER', 'root');
define('_MYSQL_DB', 'azure_sso');
define('_MYSQL_PASS', '');


// oAuth details

// tenant ID = only users in your tenant and guests can log in (unless you also select MS personal accounts), other tenants get "This user is not a guest in the target tenant" error
// common = any tenant can log in, doesn't have to be a guest
//Scope needs to include the services you wish to access - at a minimum you'll need openid and offline_access for logging on to work. Add in user.read if you want to query user profile via Graph. Separate with %20.

//define('_OAUTH_SERVER', 'https://login.microsoftonline.com/common/oauth2/v2.0/');
define('_OAUTH_SERVER', 'https://login.microsoftonline.com/ebeabe6a-8b09-454d-b5c1-ad6cb1c1252c/oauth2/v2.0/');
define('_OAUTH_CLIENTID', 'fea49213-a081-49ad-9c03-dbc999ad3eea');
define('_OAUTH_LOGOUT', 'https://login.microsoftonline.com/common/wsfederation?wa=wsignout1.0');
define('_OAUTH_SECRET', '26z7Q~hPVecJVAC9X4adFW2qKY_uLXj4jumWx');
define('_OAUTH_SCOPE', 'openid%20offline_access%20profile%20user.read');



define('_URL', 'http://localhost/PHPAzureADoAuth/www');



?>
