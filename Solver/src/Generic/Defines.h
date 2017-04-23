!
! 	*******************
!	Structure constants
! 	*******************
!
#define FORWARD 1
#define BACKWARD -1
#define LEFT 2
#define RIGHT 1
!
!	******************
!	Relevant constants
!	******************
!
#define PI 3.141592653589793238462643_RP
#define ImgI (0.0_RP , 1.0_RP)
!
!     *************************************************************************
!           Interpolation node type aliases              
!     *************************************************************************
!
!
#define LG 1
#define LGL 2
!
!     *************************************************************************
!           Parameters for I/O
!     *************************************************************************
!
#define STD_OUT 6
#define STD_IN 5
#define LINE_LENGTH 132
!
!   *****************************************
!        Physics NS
!   *****************************************
!
#define NCONS 4
#define NPRIM 6
#define NDIM 2
!
!   *****************************************
!        Parameter to control dimensions
!   *****************************************
!
#define IX 1
#define IY 2
!
!   ******************************************
!        Parameters to select variables
!   ******************************************
!
#define IRHO  1
#define IRHOU 2
#define IRHOV 3
#define IRHOE 4

!   --- Primitive variables ---
#define IU 2
#define IV 3
#define IP 4
#define IT 5
#define IA 6
!
!
!     *************************************************************************
!           Boundary conditions and faces classification
!     *************************************************************************
!
#define FACE_INTERIOR     0
#define PERIODIC_BC       1
#define DIRICHLET_BC      2
#define EULERWALL_BC      3
#define VISCOUSWALL_BC    4
#define FARFIELD_BC       5
#define PRESSUREOUTLET_BC 6
#define PRESSUREINLET_BC  7
#define RIEMANN_BC        8
#define NEWDIRICHLET_BC   9
#define WEAK_RIEMANN      1
#define WEAK_PRESCRIBED   2
#define BC_UNDEFINED      0
#define DIRICHLET         1
#define NEUMANN           2
#define PERIODIC          3
#define ADIABATIC         4
!
!	*********************
!	Quad Mesh definitions
!	*********************
!
#define POINTS_PER_QUAD 4
#define POINTS_PER_EDGE 2
#define EDGES_PER_QUAD 4
#define QUADS_PER_EDGE 2

#define EBOTTOM 1
#define ERIGHT 2
#define ETOP 3
#define ELEFT 4

!
!     *************************************************************************
!           Equation type aliases 
!     *************************************************************************
!
#define FORMI  1
#define FORMII 2
!
!
!     *************************************************************************
!           Time integration mode
!     *************************************************************************
!             
#define STEADY    0
#define TRANSIENT 1
!
!     *************************************************************************
!           Useful macros
!     *************************************************************************
!
#define errorMessage(UNIT) write(UNIT,'(A,A,A,I0)') "Error in file " , __FILE__ , ", line ",__LINE__
