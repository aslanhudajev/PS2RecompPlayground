#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start_magic
// Address: 0x234480 - 0x234784
void start_magic_0x234480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234480u;

    // 0x234480: 0x27bdff60
    ctx->pc = 0x234480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x234484: 0xffbf0080
    ctx->pc = 0x234484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x234488: 0xffb50070
    ctx->pc = 0x234488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x23448c: 0xffb40060
    ctx->pc = 0x23448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x234490: 0xffb30050
    ctx->pc = 0x234490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x234494: 0xffb20040
    ctx->pc = 0x234494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x234498: 0xffb10030
    ctx->pc = 0x234498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x23449c: 0xffb00020
    ctx->pc = 0x23449cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2344a0: 0xe7b50098
    ctx->pc = 0x2344a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2344a4: 0xe7b40090
    ctx->pc = 0x2344a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2344a8: 0x80902d
    ctx->pc = 0x2344a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344ac: 0xa0982d
    ctx->pc = 0x2344acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344b0: 0xc0882d
    ctx->pc = 0x2344b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344b4: 0xe0a82d
    ctx->pc = 0x2344b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344b8: 0x3c013f80
    ctx->pc = 0x2344b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2344bc: 0x4481a800
    ctx->pc = 0x2344bcu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2344c0: 0x6400017
    ctx->pc = 0x2344C0u;
    {
        const bool branch_taken_0x2344c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2344C4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2344c0) {
            ctx->pc = 0x234520u;
            goto label_234520;
        }
    }
    ctx->pc = 0x2344C8u;
    // 0x2344c8: 0x24032b00
    ctx->pc = 0x2344c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2344cc: 0x2431818
    ctx->pc = 0x2344ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2344d0: 0x3c020032
    ctx->pc = 0x2344d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2344d4: 0x24421bc0
    ctx->pc = 0x2344d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2344d8: 0x62a021
    ctx->pc = 0x2344d8u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2344dc: 0xc6800120
    ctx->pc = 0x2344dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2344e0: 0x46006502
    ctx->pc = 0x2344e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2344e4: 0xc0a4320
    ctx->pc = 0x2344E4u;
    SET_GPR_U32(ctx, 31, 0x2344ECu);
    ctx->pc = 0x2344E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageColor_0x290c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2344ECu; }
    }
    if (ctx->pc != 0x2344ECu) { return; }
    ctx->pc = 0x2344ECu;
    // 0x2344ec: 0x16420006
    ctx->pc = 0x2344ECu;
    {
        const bool branch_taken_0x2344ec = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2344F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 10944)));
        if (branch_taken_0x2344ec) {
            ctx->pc = 0x234508u;
            goto label_234508;
        }
    }
    ctx->pc = 0x2344F4u;
    // 0x2344f4: 0x3c013f8c
    ctx->pc = 0x2344f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16268 << 16));
    // 0x2344f8: 0x3421cccd
    ctx->pc = 0x2344f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2344fc: 0x44810000
    ctx->pc = 0x2344fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x234500: 0x4600a502
    ctx->pc = 0x234500u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x234504: 0x46000546
    ctx->pc = 0x234504u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_234508:
    // 0x234508: 0x28420019
    ctx->pc = 0x234508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 25));
    // 0x23450c: 0x1440000b
    ctx->pc = 0x23450Cu;
    {
        const bool branch_taken_0x23450c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x234510u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 17), 15));
        if (branch_taken_0x23450c) {
            ctx->pc = 0x23453Cu;
            goto label_23453c;
        }
    }
    ctx->pc = 0x234514u;
    // 0x234514: 0x3c020080
    ctx->pc = 0x234514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x234518: 0x10000007
    ctx->pc = 0x234518u;
    {
        const bool branch_taken_0x234518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23451Cu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x234518) {
            ctx->pc = 0x234538u;
            goto label_234538;
        }
    }
    ctx->pc = 0x234520u;
label_234520:
    // 0x234520: 0x3c0141a0
    ctx->pc = 0x234520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x234524: 0x44810000
    ctx->pc = 0x234524u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x234528: 0x46006502
    ctx->pc = 0x234528u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x23452c: 0x3c013f4c
    ctx->pc = 0x23452cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x234530: 0x3421cccd
    ctx->pc = 0x234530u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x234534: 0x4481a800
    ctx->pc = 0x234534u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_234538:
    // 0x234538: 0x3230000f
    ctx->pc = 0x234538u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 17), 15));
label_23453c:
    // 0x23453c: 0x16000010
    ctx->pc = 0x23453Cu;
    {
        const bool branch_taken_0x23453c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x234540u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23453c) {
            ctx->pc = 0x234580u;
            goto label_234580;
        }
    }
    ctx->pc = 0x234544u;
    // 0x234544: 0x3c030032
    ctx->pc = 0x234544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x234548: 0x8c621bb0
    ctx->pc = 0x234548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7088)));
    // 0x23454c: 0x40202d
    ctx->pc = 0x23454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234550: 0x24420001
    ctx->pc = 0x234550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x234554: 0xac621bb0
    ctx->pc = 0x234554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7088), GPR_U32(ctx, 2));
    // 0x234558: 0x24830003
    ctx->pc = 0x234558u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3));
    // 0x23455c: 0x2402ffff
    ctx->pc = 0x23455cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234560: 0x44102a
    ctx->pc = 0x234560u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x234564: 0x82180b
    ctx->pc = 0x234564u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x234568: 0x38083
    ctx->pc = 0x234568u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x23456c: 0x101080
    ctx->pc = 0x23456cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x234570: 0x828023
    ctx->pc = 0x234570u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x234574: 0x26100001
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x234578: 0x2308825
    ctx->pc = 0x234578u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x23457c: 0x2402ffff
    ctx->pc = 0x23457cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_234580:
    // 0x234580: 0x52102a
    ctx->pc = 0x234580u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x234584: 0x2a80a
    ctx->pc = 0x234584u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
    // 0x234588: 0x2aa20002
    ctx->pc = 0x234588u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 2));
    // 0x23458c: 0x14400039
    ctx->pc = 0x23458Cu;
    {
        const bool branch_taken_0x23458c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x234590u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 512));
        if (branch_taken_0x23458c) {
            ctx->pc = 0x234674u;
            goto label_234674;
        }
    }
    ctx->pc = 0x234594u;
    // 0x234594: 0x86820930
    ctx->pc = 0x234594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2352)));
    // 0x234598: 0x44821800
    ctx->pc = 0x234598u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x23459c: 0x468018e0
    ctx->pc = 0x23459cu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x2345a0: 0x3c013fc0
    ctx->pc = 0x2345a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x2345a4: 0x44810000
    ctx->pc = 0x2345a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2345a8: 0x460018c2
    ctx->pc = 0x2345a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2345ac: 0x3c0140a0
    ctx->pc = 0x2345acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2345b0: 0x44810000
    ctx->pc = 0x2345b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2345b4: 0x460018c0
    ctx->pc = 0x2345b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2345b8: 0xc6820040
    ctx->pc = 0x2345b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2345bc: 0xe7a20010
    ctx->pc = 0x2345bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2345c0: 0xc6810044
    ctx->pc = 0x2345c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2345c4: 0xe7a10014
    ctx->pc = 0x2345c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2345c8: 0xc6840048
    ctx->pc = 0x2345c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2345cc: 0xc6650000
    ctx->pc = 0x2345ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2345d0: 0xc6660004
    ctx->pc = 0x2345d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2345d4: 0xc6670008
    ctx->pc = 0x2345d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2345d8: 0x46021000
    ctx->pc = 0x2345d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2345dc: 0x46050000
    ctx->pc = 0x2345dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2345e0: 0xe7a00000
    ctx->pc = 0x2345e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2345e4: 0x46010840
    ctx->pc = 0x2345e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2345e8: 0x46060840
    ctx->pc = 0x2345e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2345ec: 0x46042000
    ctx->pc = 0x2345ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2345f0: 0x46070000
    ctx->pc = 0x2345f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2345f4: 0xe7a00008
    ctx->pc = 0x2345f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2345f8: 0x3c014080
    ctx->pc = 0x2345f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2345fc: 0x44810000
    ctx->pc = 0x2345fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x234600: 0x46000840
    ctx->pc = 0x234600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x234604: 0xe7a10004
    ctx->pc = 0x234604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x234608: 0x3c013f34
    ctx->pc = 0x234608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x23460c: 0x3421fdf4
    ctx->pc = 0x23460cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x234610: 0x44810000
    ctx->pc = 0x234610u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x234614: 0x46001082
    ctx->pc = 0x234614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x234618: 0x46002102
    ctx->pc = 0x234618u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x23461c: 0x46021882
    ctx->pc = 0x23461cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x234620: 0xe7a20010
    ctx->pc = 0x234620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x234624: 0x46001802
    ctx->pc = 0x234624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x234628: 0xe7a00014
    ctx->pc = 0x234628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23462c: 0x460418c2
    ctx->pc = 0x23462cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x234630: 0xe7a30018
    ctx->pc = 0x234630u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x234634: 0x3c014220
    ctx->pc = 0x234634u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16928 << 16));
    // 0x234638: 0x44816800
    ctx->pc = 0x234638u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x23463c: 0x3c013f40
    ctx->pc = 0x23463cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x234640: 0x44817000
    ctx->pc = 0x234640u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x234644: 0x3a0202d
    ctx->pc = 0x234644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234648: 0x27a50010
    ctx->pc = 0x234648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x23464c: 0x3c0142c8
    ctx->pc = 0x23464cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x234650: 0x44816000
    ctx->pc = 0x234650u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x234654: 0x460dab42
    ctx->pc = 0x234654u;
    ctx->f[13] = FPU_MUL_S(ctx->f[21], ctx->f[13]);
    // 0x234658: 0x460ea382
    ctx->pc = 0x234658u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x23465c: 0x220302d
    ctx->pc = 0x23465cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234660: 0x240382d
    ctx->pc = 0x234660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234664: 0xc09fab4
    ctx->pc = 0x234664u;
    SET_GPR_U32(ctx, 31, 0x23466Cu);
    ctx->pc = 0x234668u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 7));
    ctx->pc = 0x27EAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThrowMagicFX_0x27ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23466Cu; }
    }
    if (ctx->pc != 0x23466Cu) { return; }
    ctx->pc = 0x23466Cu;
    // 0x23466c: 0x1000002c
    ctx->pc = 0x23466Cu;
    {
        const bool branch_taken_0x23466c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23466c) {
            ctx->pc = 0x234720u;
            goto label_234720;
        }
    }
    ctx->pc = 0x234674u;
label_234674:
    // 0x234674: 0x24020001
    ctx->pc = 0x234674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x234678: 0x16a2001a
    ctx->pc = 0x234678u;
    {
        const bool branch_taken_0x234678 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x23467Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234678) {
            ctx->pc = 0x2346E4u;
            goto label_2346e4;
        }
    }
    ctx->pc = 0x234680u;
    // 0x234680: 0x3c0141c8
    ctx->pc = 0x234680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16840 << 16));
    // 0x234684: 0x44816000
    ctx->pc = 0x234684u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x234688: 0x3c013e80
    ctx->pc = 0x234688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x23468c: 0x44816800
    ctx->pc = 0x23468cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x234690: 0x202d
    ctx->pc = 0x234690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234694: 0x460cab02
    ctx->pc = 0x234694u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x234698: 0x460da342
    ctx->pc = 0x234698u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x23469c: 0x220282d
    ctx->pc = 0x23469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346a0: 0xc09fb46
    ctx->pc = 0x2346A0u;
    SET_GPR_U32(ctx, 31, 0x2346A8u);
    ctx->pc = 0x2346A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27ED18u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartShieldFX_0x27ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346A8u; }
    }
    if (ctx->pc != 0x2346A8u) { return; }
    ctx->pc = 0x2346A8u;
    // 0x2346a8: 0x3c030034
    ctx->pc = 0x2346a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2346ac: 0x24630eb0
    ctx->pc = 0x2346acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x2346b0: 0x240400f0
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 240));
    // 0x2346b4: 0x441018
    ctx->pc = 0x2346b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2346b8: 0x431021
    ctx->pc = 0x2346b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2346bc: 0x8c440014
    ctx->pc = 0x2346bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2346c0: 0xc0b3f94
    ctx->pc = 0x2346C0u;
    SET_GPR_U32(ctx, 31, 0x2346C8u);
    ctx->pc = 0x2346C4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 128)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346C8u; }
    }
    if (ctx->pc != 0x2346C8u) { return; }
    ctx->pc = 0x2346C8u;
    // 0x2346c8: 0x6400015
    ctx->pc = 0x2346C8u;
    {
        const bool branch_taken_0x2346c8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2346CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2346c8) {
            ctx->pc = 0x234720u;
            goto label_234720;
        }
    }
    ctx->pc = 0x2346D0u;
    // 0x2346d0: 0x260282d
    ctx->pc = 0x2346d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346d4: 0xc097bb8
    ctx->pc = 0x2346D4u;
    SET_GPR_U32(ctx, 31, 0x2346DCu);
    ctx->pc = 0x2346D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25EEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPotion_0x25eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2346DCu; }
    }
    if (ctx->pc != 0x2346DCu) { return; }
    ctx->pc = 0x2346DCu;
    // 0x2346dc: 0x10000010
    ctx->pc = 0x2346DCu;
    {
        const bool branch_taken_0x2346dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2346dc) {
            ctx->pc = 0x234720u;
            goto label_234720;
        }
    }
    ctx->pc = 0x2346E4u;
label_2346e4:
    // 0x2346e4: 0x3c014220
    ctx->pc = 0x2346e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16928 << 16));
    // 0x2346e8: 0x44816000
    ctx->pc = 0x2346e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2346ec: 0x460cab02
    ctx->pc = 0x2346ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2346f0: 0x4600a346
    ctx->pc = 0x2346f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2346f4: 0x220282d
    ctx->pc = 0x2346f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346f8: 0xc09fa68
    ctx->pc = 0x2346F8u;
    SET_GPR_U32(ctx, 31, 0x234700u);
    ctx->pc = 0x2346FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E9A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartMagicFX_0x27e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234700u; }
    }
    if (ctx->pc != 0x234700u) { return; }
    ctx->pc = 0x234700u;
    // 0x234700: 0x40202d
    ctx->pc = 0x234700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234704: 0xc09eaa0
    ctx->pc = 0x234704u;
    SET_GPR_U32(ctx, 31, 0x23470Cu);
    ctx->pc = 0x234708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27AA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceEffectOnFloor_0x27aa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23470Cu; }
    }
    if (ctx->pc != 0x23470Cu) { return; }
    ctx->pc = 0x23470Cu;
    // 0x23470c: 0x6400004
    ctx->pc = 0x23470Cu;
    {
        const bool branch_taken_0x23470c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x234710u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23470c) {
            ctx->pc = 0x234720u;
            goto label_234720;
        }
    }
    ctx->pc = 0x234714u;
    // 0x234714: 0x260282d
    ctx->pc = 0x234714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234718: 0xc097bb8
    ctx->pc = 0x234718u;
    SET_GPR_U32(ctx, 31, 0x234720u);
    ctx->pc = 0x23471Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25EEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPotion_0x25eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234720u; }
    }
    if (ctx->pc != 0x234720u) { return; }
    ctx->pc = 0x234720u;
label_234720:
    // 0x234720: 0x1280000e
    ctx->pc = 0x234720u;
    {
        const bool branch_taken_0x234720 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x234724u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x234720) {
            ctx->pc = 0x23475Cu;
            goto label_23475c;
        }
    }
    ctx->pc = 0x234728u;
    // 0x234728: 0x8e822ac0
    ctx->pc = 0x234728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 10944)));
    // 0x23472c: 0x2842004b
    ctx->pc = 0x23472cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 75));
    // 0x234730: 0x5440000b
    ctx->pc = 0x234730u;
    {
        const bool branch_taken_0x234730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x234730) {
            ctx->pc = 0x234734u;
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->pc = 0x234760u;
            goto label_234760;
        }
    }
    ctx->pc = 0x234738u;
    // 0x234738: 0x24020001
    ctx->pc = 0x234738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23473c: 0x12a20007
    ctx->pc = 0x23473Cu;
    {
        const bool branch_taken_0x23473c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x234740u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23473c) {
            ctx->pc = 0x23475Cu;
            goto label_23475c;
        }
    }
    ctx->pc = 0x234744u;
    // 0x234744: 0xc09fb26
    ctx->pc = 0x234744u;
    SET_GPR_U32(ctx, 31, 0x23474Cu);
    ctx->pc = 0x234748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x27EC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartMagicHealFX_0x27ec98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23474Cu; }
    }
    if (ctx->pc != 0x23474Cu) { return; }
    ctx->pc = 0x23474Cu;
    // 0x23474c: 0x40202d
    ctx->pc = 0x23474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234750: 0xc09f732
    ctx->pc = 0x234750u;
    SET_GPR_U32(ctx, 31, 0x234758u);
    ctx->pc = 0x234754u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 128)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234758u; }
    }
    if (ctx->pc != 0x234758u) { return; }
    ctx->pc = 0x234758u;
    // 0x234758: 0xdfbf0080
    ctx->pc = 0x234758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23475c:
    // 0x23475c: 0xdfb50070
    ctx->pc = 0x23475cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_234760:
    // 0x234760: 0xdfb40060
    ctx->pc = 0x234760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x234764: 0xdfb30050
    ctx->pc = 0x234764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234768: 0xdfb20040
    ctx->pc = 0x234768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23476c: 0xdfb10030
    ctx->pc = 0x23476cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234770: 0xdfb00020
    ctx->pc = 0x234770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234774: 0xc7b50098
    ctx->pc = 0x234774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x234778: 0xc7b40090
    ctx->pc = 0x234778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23477c: 0x3e00008
    ctx->pc = 0x23477Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234780u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234508u: goto label_234508;
            case 0x234520u: goto label_234520;
            case 0x234538u: goto label_234538;
            case 0x23453Cu: goto label_23453c;
            case 0x234580u: goto label_234580;
            case 0x234674u: goto label_234674;
            case 0x2346E4u: goto label_2346e4;
            case 0x234720u: goto label_234720;
            case 0x23475Cu: goto label_23475c;
            case 0x234760u: goto label_234760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234784u;
}
