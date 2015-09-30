//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

#ifdef WIN32
        //----------------------------------------------------------------
        glClear (GL_DEPTH_BUFFER_BIT);
        glViewport(1, 1, (GLsizei)(viewWidth) * resize_SHADOW_FBO - 2, (GLsizei)(viewHeight) * resize_SHADOW_FBO - 2);
        //----------------------------------------------------------------

      LoadIdentity(light_projection);
      PerspectiveMatrix(light_projection, fieldOfView, (GLfloat)viewWidth /(GLfloat)viewHeight,  adjustNearFar_LIGHT[0],  adjustNearFar_LIGHT[1]);

//float aspectRatio = viewWidth/viewHeight;
//LoadIdentity(light_projection);
//mtxOrtho(light_projection, -4*aspectRatio, 4*aspectRatio , -4, 4, 2, 50);




/*
        //----------------------------------------------------------------
        glClear (GL_DEPTH_BUFFER_BIT);
        glViewport(1, 1, (2048)-2, (2048)-2);
        //----------------------------------------------------------------

        LoadIdentity(Light_Projection);
        PerspectiveMatrix(Light_Projection, fieldOfView, 2048 / 2048,  adjustNearFar[0],  adjustNearFar[1]);
*/
#endif
   
#ifdef   __APPLE__     
        //----------------------------------------------------------------
        glClear (GL_DEPTH_BUFFER_BIT);
        glViewport(1, 1, 2000 - 2, 1000 - 2);
        //----------------------------------------------------------------
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE); 
        LoadIdentity(light_projection);
        PerspectiveMatrix(light_projection, fieldOfView, 2000 / 1000,  adjustNearFar_LIGHT[0],  adjustNearFar_LIGHT[1]);
#endif          
      

        //====================================================================================    

shaderNumber = 11;      
setupTransforms_Shadows();         

   
        //=================================================================================
        //#include "_MODEL_FOLDERS_/room_10/room_10_SHADOW_00.cpp"
        //#include "_MODEL_FOLDERS_/room_10_softDiffuse/room_10_softDiffuse_RENDER.cpp"
        //=================================================================================
/*
    //----------------
    setPosition[0]  = 0.0;
    setPosition[1]  = 0.0;        
    setPosition[2]  = 0.0;    
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_A/BEAMS_01_A_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_B/BEAMS_01_B_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_C/BEAMS_01_C_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_BOTTOM/TILES_01_BOTTOM_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_TOP/TILES_01_TOP_SHADOW_00.cpp"
    //=================================================================================
    //----------------
    setPosition[0]  = 0.0;
    setPosition[1]  = 4.0;        
    setPosition[2]  = 0.0;    
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_A/BEAMS_01_A_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_B/BEAMS_01_B_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_C/BEAMS_01_C_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_BOTTOM/TILES_01_BOTTOM_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_TOP/TILES_01_TOP_SHADOW_00.cpp"
    //=================================================================================
    //----------------
    setPosition[0]  = 0.0;
    setPosition[1]  = 8.0;        
    setPosition[2]  = 0.0;    
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_A/BEAMS_01_A_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_B/BEAMS_01_B_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_C/BEAMS_01_C_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_BOTTOM/TILES_01_BOTTOM_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_TOP/TILES_01_TOP_SHADOW_00.cpp"
    //=================================================================================
*/

    //=================================================================================
    #include "_MODEL_FOLDERS_/mountains_Chain_1/mountains_Chain_1_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/mountains_Chain_2/mountains_Chain_2_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/mountains_Chain_3/mountains_Chain_3_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/ground/ground_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/backWall_BOTTOM/backWall_BOTTOM_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/backWall_TOP/backWall_TOP_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/bar/bar_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/doorWindowEdges/doorWindowEdges_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/frontWall/frontWall_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/logs_1/logs_1_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/logs_2/logs_2_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/logs_3/logs_3_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/logs_4/logs_4_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/sideWalls_1/sideWalls_1_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/sideWalls_2/sideWalls_2_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/sideWalls_3/sideWalls_3_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/sideWalls_4/sideWalls_4_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/sign/sign_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/stools/stools_SHADOW_00.cpp"
    //=================================================================================
    #include "_MODEL_FOLDERS_/windowTable/windowTable_SHADOW_00.cpp"
    //=================================================================================
 
