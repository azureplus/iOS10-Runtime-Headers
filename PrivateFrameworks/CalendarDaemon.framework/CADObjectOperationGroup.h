/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(id /* block */)arg2;
- (void)CADObject:(struct { int x1; int x2; })arg1 getDataPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 getDatePropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 getNumberPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 getPropertiesWithNames:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 getPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 getStringPropertyWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)CADObject:(struct { int x1; int x2; })arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(id /* block */)arg4;
- (void)CADObjectExists:(struct { int x1; int x2; })arg1 reply:(id /* block */)arg2;
- (void)CADObjectsExist:(id)arg1 reply:(id /* block */)arg2;

@end
