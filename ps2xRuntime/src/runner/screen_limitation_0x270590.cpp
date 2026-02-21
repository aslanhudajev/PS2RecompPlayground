#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: screen_limitation
// Address: 0x270590 - 0x2711bc
void screen_limitation_0x270590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x270590u;

    // 0x270590: 0x27bdff10
    ctx->pc = 0x270590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x270594: 0xffbf00b0
    ctx->pc = 0x270594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x270598: 0xffb500a0
    ctx->pc = 0x270598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x27059c: 0xffb40090
    ctx->pc = 0x27059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2705a0: 0xffb30080
    ctx->pc = 0x2705a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2705a4: 0xffb20070
    ctx->pc = 0x2705a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2705a8: 0xffb10060
    ctx->pc = 0x2705a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2705ac: 0xffb00050
    ctx->pc = 0x2705acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2705b0: 0xe7b800e0
    ctx->pc = 0x2705b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2705b4: 0xe7b700d8
    ctx->pc = 0x2705b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2705b8: 0xe7b600d0
    ctx->pc = 0x2705b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2705bc: 0xe7b500c8
    ctx->pc = 0x2705bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2705c0: 0xe7b400c0
    ctx->pc = 0x2705c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2705c4: 0x80982d
    ctx->pc = 0x2705c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705c8: 0xa0902d
    ctx->pc = 0x2705c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705cc: 0x24032b00
    ctx->pc = 0x2705ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2705d0: 0x2631818
    ctx->pc = 0x2705d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2705d4: 0x3c020032
    ctx->pc = 0x2705d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2705d8: 0x24421bc0
    ctx->pc = 0x2705d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2705dc: 0xc0aa372
    ctx->pc = 0x2705DCu;
    SET_GPR_U32(ctx, 31, 0x2705E4u);
    ctx->pc = 0x2705E0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x2A8DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenHeight_0x2a8dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2705E4u; }
    }
    if (ctx->pc != 0x2705E4u) { return; }
    ctx->pc = 0x2705E4u;
    // 0x2705e4: 0xc0aa36c
    ctx->pc = 0x2705E4u;
    SET_GPR_U32(ctx, 31, 0x2705ECu);
    ctx->pc = 0x2705E8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenWidth_0x2a8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2705ECu; }
    }
    if (ctx->pc != 0x2705ECu) { return; }
    ctx->pc = 0x2705ECu;
    // 0x2705ec: 0x40a02d
    ctx->pc = 0x2705ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705f0: 0x8e0301dc
    ctx->pc = 0x2705f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x2705f4: 0x2402001d
    ctx->pc = 0x2705f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x2705f8: 0x54620003
    ctx->pc = 0x2705F8u;
    {
        const bool branch_taken_0x2705f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2705f8) {
            ctx->pc = 0x2705FCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x270608u;
            goto label_270608;
        }
    }
    ctx->pc = 0x270600u;
    // 0x270600: 0x100002e0
    ctx->pc = 0x270600u;
    {
        const bool branch_taken_0x270600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270604u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x270600) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270608u;
label_270608:
    // 0x270608: 0xc615087c
    ctx->pc = 0x270608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27060c: 0xc6000060
    ctx->pc = 0x27060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270610: 0xc6410000
    ctx->pc = 0x270610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270614: 0x46010000
    ctx->pc = 0x270614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270618: 0xe7a00000
    ctx->pc = 0x270618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27061c: 0xc6000064
    ctx->pc = 0x27061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270620: 0xc6410004
    ctx->pc = 0x270620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270624: 0x46010000
    ctx->pc = 0x270624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270628: 0xe7a00004
    ctx->pc = 0x270628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27062c: 0xc6000068
    ctx->pc = 0x27062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270630: 0xc6410008
    ctx->pc = 0x270630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270634: 0x46010000
    ctx->pc = 0x270634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270638: 0xe7a00008
    ctx->pc = 0x270638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27063c: 0x202d
    ctx->pc = 0x27063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270640: 0x27a50040
    ctx->pc = 0x270640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x270644: 0x27a60044
    ctx->pc = 0x270644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    // 0x270648: 0xc09cf78
    ctx->pc = 0x270648u;
    SET_GPR_U32(ctx, 31, 0x270650u);
    ctx->pc = 0x27064Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270650u; }
    }
    if (ctx->pc != 0x270650u) { return; }
    ctx->pc = 0x270650u;
    // 0x270650: 0x3c020034
    ctx->pc = 0x270650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270654: 0x2451f530
    ctx->pc = 0x270654u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x270658: 0x26030020
    ctx->pc = 0x270658u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 32));
    // 0x27065c: 0x8e220004
    ctx->pc = 0x27065cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x270660: 0x10430009
    ctx->pc = 0x270660u;
    {
        const bool branch_taken_0x270660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x270664u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x270660) {
            ctx->pc = 0x270688u;
            goto label_270688;
        }
    }
    ctx->pc = 0x270668u;
    // 0x270668: 0x24840001
    ctx->pc = 0x270668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x27066c: 0x0
    ctx->pc = 0x27066cu;
    // NOP
label_270670:
    // 0x270670: 0x2882000f
    ctx->pc = 0x270670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x270674: 0x10400036
    ctx->pc = 0x270674u;
    {
        const bool branch_taken_0x270674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x270678u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
        if (branch_taken_0x270674) {
            ctx->pc = 0x270750u;
            goto label_270750;
        }
    }
    ctx->pc = 0x27067Cu;
    // 0x27067c: 0x8e220004
    ctx->pc = 0x27067cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x270680: 0x5443fffb
    ctx->pc = 0x270680u;
    {
        const bool branch_taken_0x270680 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x270680) {
            ctx->pc = 0x270684u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x270688u;
label_270688:
    // 0x270688: 0x2882000f
    ctx->pc = 0x270688u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x27068c: 0x10400030
    ctx->pc = 0x27068Cu;
    {
        const bool branch_taken_0x27068c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x270690u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x27068c) {
            ctx->pc = 0x270750u;
            goto label_270750;
        }
    }
    ctx->pc = 0x270694u;
    // 0x270694: 0xc6220034
    ctx->pc = 0x270694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270698: 0xc620003c
    ctx->pc = 0x270698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27069c: 0x46001081
    ctx->pc = 0x27069cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2706a0: 0x3c020034
    ctx->pc = 0x2706a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2706a4: 0x8c43f924
    ctx->pc = 0x2706a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x2706a8: 0x2463003c
    ctx->pc = 0x2706a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 60));
    // 0x2706ac: 0x8c82f920
    ctx->pc = 0x2706acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294965536)));
    // 0x2706b0: 0x431023
    ctx->pc = 0x2706b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2706b4: 0x44820000
    ctx->pc = 0x2706b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2706b8: 0x46800020
    ctx->pc = 0x2706b8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2706bc: 0x3c013f19
    ctx->pc = 0x2706bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x2706c0: 0x3421999a
    ctx->pc = 0x2706c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2706c4: 0x44810800
    ctx->pc = 0x2706c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2706c8: 0x46010002
    ctx->pc = 0x2706c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2706cc: 0x46020036
    ctx->pc = 0x2706ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2706d0: 0x0
    ctx->pc = 0x2706d0u;
    // NOP
    // 0x2706d4: 0x4500001e
    ctx->pc = 0x2706D4u;
    {
        const bool branch_taken_0x2706d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2706D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2706d4) {
            ctx->pc = 0x270750u;
            goto label_270750;
        }
    }
    ctx->pc = 0x2706DCu;
    // 0x2706dc: 0xc6000050
    ctx->pc = 0x2706dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2706e0: 0xc6410000
    ctx->pc = 0x2706e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2706e4: 0x46010000
    ctx->pc = 0x2706e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2706e8: 0xe7a00010
    ctx->pc = 0x2706e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2706ec: 0xc6000054
    ctx->pc = 0x2706ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2706f0: 0xc6410004
    ctx->pc = 0x2706f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2706f4: 0x46010000
    ctx->pc = 0x2706f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2706f8: 0xe7a00014
    ctx->pc = 0x2706f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2706fc: 0xc6000058
    ctx->pc = 0x2706fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270700: 0xc6410008
    ctx->pc = 0x270700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270704: 0x46010000
    ctx->pc = 0x270704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270708: 0xe7a00018
    ctx->pc = 0x270708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27070c: 0x27a50048
    ctx->pc = 0x27070cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 72));
    // 0x270710: 0x27a6004c
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
    // 0x270714: 0xc09cf78
    ctx->pc = 0x270714u;
    SET_GPR_U32(ctx, 31, 0x27071Cu);
    ctx->pc = 0x270718u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27071Cu; }
    }
    if (ctx->pc != 0x27071Cu) { return; }
    ctx->pc = 0x27071Cu;
    // 0x27071c: 0xc6220034
    ctx->pc = 0x27071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270720: 0xc620003c
    ctx->pc = 0x270720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270724: 0x46001081
    ctx->pc = 0x270724u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270728: 0xc7a00044
    ctx->pc = 0x270728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27072c: 0xc7a1004c
    ctx->pc = 0x27072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270730: 0x46010001
    ctx->pc = 0x270730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270734: 0x46001036
    ctx->pc = 0x270734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270738: 0x0
    ctx->pc = 0x270738u;
    // NOP
    // 0x27073c: 0x45000005
    ctx->pc = 0x27073Cu;
    {
        const bool branch_taken_0x27073c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270740u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27073c) {
            ctx->pc = 0x270754u;
            goto label_270754;
        }
    }
    ctx->pc = 0x270744u;
    // 0x270744: 0xae400000
    ctx->pc = 0x270744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x270748: 0xae400004
    ctx->pc = 0x270748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x27074c: 0xae400008
    ctx->pc = 0x27074cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_270750:
    // 0x270750: 0x3c020034
    ctx->pc = 0x270750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_270754:
    // 0x270754: 0x8c42f918
    ctx->pc = 0x270754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x270758: 0x2442001e
    ctx->pc = 0x270758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x27075c: 0x44822000
    ctx->pc = 0x27075cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x270760: 0x46802120
    ctx->pc = 0x270760u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x270764: 0xc7a00040
    ctx->pc = 0x270764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270768: 0x46002034
    ctx->pc = 0x270768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27076c: 0x0
    ctx->pc = 0x27076cu;
    // NOP
    // 0x270770: 0x4500003d
    ctx->pc = 0x270770u;
    {
        const bool branch_taken_0x270770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270774u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270770) {
            ctx->pc = 0x270868u;
            goto label_270868;
        }
    }
    ctx->pc = 0x270778u;
    // 0x270778: 0x8c42f91c
    ctx->pc = 0x270778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x27077c: 0x2442ffe2
    ctx->pc = 0x27077cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x270780: 0x44821800
    ctx->pc = 0x270780u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x270784: 0x468018e0
    ctx->pc = 0x270784u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x270788: 0x46030034
    ctx->pc = 0x270788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27078c: 0x0
    ctx->pc = 0x27078cu;
    // NOP
    // 0x270790: 0x45000035
    ctx->pc = 0x270790u;
    {
        const bool branch_taken_0x270790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270794u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270790) {
            ctx->pc = 0x270868u;
            goto label_270868;
        }
    }
    ctx->pc = 0x270798u;
    // 0x270798: 0x8c42f924
    ctx->pc = 0x270798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x27079c: 0x24420028
    ctx->pc = 0x27079cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x2707a0: 0x44821000
    ctx->pc = 0x2707a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x2707a4: 0x468010a0
    ctx->pc = 0x2707a4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2707a8: 0xc7a00044
    ctx->pc = 0x2707a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2707ac: 0x46001034
    ctx->pc = 0x2707acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2707b0: 0x0
    ctx->pc = 0x2707b0u;
    // NOP
    // 0x2707b4: 0x4500002c
    ctx->pc = 0x2707B4u;
    {
        const bool branch_taken_0x2707b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2707B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2707b4) {
            ctx->pc = 0x270868u;
            goto label_270868;
        }
    }
    ctx->pc = 0x2707BCu;
    // 0x2707bc: 0x8c42f920
    ctx->pc = 0x2707bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x2707c0: 0x2442ffec
    ctx->pc = 0x2707c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2707c4: 0x44820800
    ctx->pc = 0x2707c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2707c8: 0x46800860
    ctx->pc = 0x2707c8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2707cc: 0x46010034
    ctx->pc = 0x2707ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2707d0: 0x0
    ctx->pc = 0x2707d0u;
    // NOP
    // 0x2707d4: 0x45000024
    ctx->pc = 0x2707D4u;
    {
        const bool branch_taken_0x2707d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2707D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2707d4) {
            ctx->pc = 0x270868u;
            goto label_270868;
        }
    }
    ctx->pc = 0x2707DCu;
    // 0x2707dc: 0x8c42f8fc
    ctx->pc = 0x2707dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x2707e0: 0x28420002
    ctx->pc = 0x2707e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2707e4: 0x54400267
    ctx->pc = 0x2707E4u;
    {
        const bool branch_taken_0x2707e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2707e4) {
            ctx->pc = 0x2707E8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x2707ECu;
    // 0x2707ec: 0x4604a036
    ctx->pc = 0x2707ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2707f0: 0x0
    ctx->pc = 0x2707f0u;
    // NOP
    // 0x2707f4: 0x4501000c
    ctx->pc = 0x2707F4u;
    {
        const bool branch_taken_0x2707f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2707F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2707f4) {
            ctx->pc = 0x270828u;
            goto label_270828;
        }
    }
    ctx->pc = 0x2707FCu;
    // 0x2707fc: 0x46141836
    ctx->pc = 0x2707fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270800: 0x45010009
    ctx->pc = 0x270800u;
    {
        const bool branch_taken_0x270800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270800) {
            ctx->pc = 0x270828u;
            goto label_270828;
        }
    }
    ctx->pc = 0x270808u;
    // 0x270808: 0x4602a836
    ctx->pc = 0x270808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27080c: 0x0
    ctx->pc = 0x27080cu;
    // NOP
    // 0x270810: 0x45030006
    ctx->pc = 0x270810u;
    {
        const bool branch_taken_0x270810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270810) {
            ctx->pc = 0x270814u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x27082Cu;
            goto label_27082c;
        }
    }
    ctx->pc = 0x270818u;
    // 0x270818: 0x46150836
    ctx->pc = 0x270818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27081c: 0x0
    ctx->pc = 0x27081cu;
    // NOP
    // 0x270820: 0x45020258
    ctx->pc = 0x270820u;
    {
        const bool branch_taken_0x270820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270820) {
            ctx->pc = 0x270824u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270828u;
label_270828:
    // 0x270828: 0xc441ec30
    ctx->pc = 0x270828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27082c:
    // 0x27082c: 0x3c0142a0
    ctx->pc = 0x27082cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x270830: 0x44810000
    ctx->pc = 0x270830u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270834: 0x46010036
    ctx->pc = 0x270834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270838: 0x0
    ctx->pc = 0x270838u;
    // NOP
    // 0x27083c: 0x45010006
    ctx->pc = 0x27083Cu;
    {
        const bool branch_taken_0x27083c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270840u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x27083c) {
            ctx->pc = 0x270858u;
            goto label_270858;
        }
    }
    ctx->pc = 0x270844u;
    // 0x270844: 0x3c020034
    ctx->pc = 0x270844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270848: 0x8c42cdb8
    ctx->pc = 0x270848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x27084c: 0x441024d
    ctx->pc = 0x27084Cu;
    {
        const bool branch_taken_0x27084c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270850u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27084c) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270854u;
    // 0x270854: 0x2404003c
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
label_270858:
    // 0x270858: 0xc09c148
    ctx->pc = 0x270858u;
    SET_GPR_U32(ctx, 31, 0x270860u);
    ctx->pc = 0x27085Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270860u; }
    }
    if (ctx->pc != 0x270860u) { return; }
    ctx->pc = 0x270860u;
    // 0x270860: 0x10000248
    ctx->pc = 0x270860u;
    {
        const bool branch_taken_0x270860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270864u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x270860) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270868u;
label_270868:
    // 0x270868: 0x3c020034
    ctx->pc = 0x270868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27086c: 0x8c42f918
    ctx->pc = 0x27086cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x270870: 0x2442001e
    ctx->pc = 0x270870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x270874: 0x44821000
    ctx->pc = 0x270874u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x270878: 0x468010a0
    ctx->pc = 0x270878u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x27087c: 0x46141034
    ctx->pc = 0x27087cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270880: 0x0
    ctx->pc = 0x270880u;
    // NOP
    // 0x270884: 0x45000042
    ctx->pc = 0x270884u;
    {
        const bool branch_taken_0x270884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270884) {
            ctx->pc = 0x270990u;
            goto label_270990;
        }
    }
    ctx->pc = 0x27088Cu;
    // 0x27088c: 0x8c42f91c
    ctx->pc = 0x27088cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x270890: 0x2442ffe2
    ctx->pc = 0x270890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x270894: 0x44820800
    ctx->pc = 0x270894u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x270898: 0x46800860
    ctx->pc = 0x270898u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x27089c: 0x4601a034
    ctx->pc = 0x27089cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2708a0: 0x0
    ctx->pc = 0x2708a0u;
    // NOP
    // 0x2708a4: 0x4500003a
    ctx->pc = 0x2708A4u;
    {
        const bool branch_taken_0x2708a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2708A8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2708a4) {
            ctx->pc = 0x270990u;
            goto label_270990;
        }
    }
    ctx->pc = 0x2708ACu;
    // 0x2708ac: 0x46001034
    ctx->pc = 0x2708acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2708b0: 0x0
    ctx->pc = 0x2708b0u;
    // NOP
    // 0x2708b4: 0x45000037
    ctx->pc = 0x2708B4u;
    {
        const bool branch_taken_0x2708b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2708B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2708b4) {
            ctx->pc = 0x270994u;
            goto label_270994;
        }
    }
    ctx->pc = 0x2708BCu;
    // 0x2708bc: 0x46010034
    ctx->pc = 0x2708bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2708c0: 0x0
    ctx->pc = 0x2708c0u;
    // NOP
    // 0x2708c4: 0x45000032
    ctx->pc = 0x2708C4u;
    {
        const bool branch_taken_0x2708c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2708C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2708c4) {
            ctx->pc = 0x270990u;
            goto label_270990;
        }
    }
    ctx->pc = 0x2708CCu;
    // 0x2708cc: 0x8c421bd0
    ctx->pc = 0x2708ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2708d0: 0xc442000c
    ctx->pc = 0x2708d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2708d4: 0x4602a841
    ctx->pc = 0x2708d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2708d8: 0x46000845
    ctx->pc = 0x2708d8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2708dc: 0xc7a00044
    ctx->pc = 0x2708dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2708e0: 0x46020001
    ctx->pc = 0x2708e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2708e4: 0x46000005
    ctx->pc = 0x2708e4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2708e8: 0x46010034
    ctx->pc = 0x2708e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2708ec: 0x0
    ctx->pc = 0x2708ecu;
    // NOP
    // 0x2708f0: 0x45000027
    ctx->pc = 0x2708F0u;
    {
        const bool branch_taken_0x2708f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2708F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2708f0) {
            ctx->pc = 0x270990u;
            goto label_270990;
        }
    }
    ctx->pc = 0x2708F8u;
    // 0x2708f8: 0x8c42f8fc
    ctx->pc = 0x2708f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x2708fc: 0x28420002
    ctx->pc = 0x2708fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x270900: 0x14400220
    ctx->pc = 0x270900u;
    {
        const bool branch_taken_0x270900 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x270904u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x270900) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270908u;
    // 0x270908: 0x3c020034
    ctx->pc = 0x270908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27090c: 0x8c42f924
    ctx->pc = 0x27090cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x270910: 0x24420028
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x270914: 0x44820000
    ctx->pc = 0x270914u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270918: 0x46800020
    ctx->pc = 0x270918u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x27091c: 0x4600a836
    ctx->pc = 0x27091cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270920: 0x0
    ctx->pc = 0x270920u;
    // NOP
    // 0x270924: 0x4501000a
    ctx->pc = 0x270924u;
    {
        const bool branch_taken_0x270924 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270928u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270924) {
            ctx->pc = 0x270950u;
            goto label_270950;
        }
    }
    ctx->pc = 0x27092Cu;
    // 0x27092c: 0x3c020034
    ctx->pc = 0x27092cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270930: 0x8c42f920
    ctx->pc = 0x270930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x270934: 0x2442ffec
    ctx->pc = 0x270934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x270938: 0x44820000
    ctx->pc = 0x270938u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x27093c: 0x46800020
    ctx->pc = 0x27093cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270940: 0x46150036
    ctx->pc = 0x270940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270944: 0x0
    ctx->pc = 0x270944u;
    // NOP
    // 0x270948: 0x4500000f
    ctx->pc = 0x270948u;
    {
        const bool branch_taken_0x270948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27094Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270948) {
            ctx->pc = 0x270988u;
            goto label_270988;
        }
    }
    ctx->pc = 0x270950u;
label_270950:
    // 0x270950: 0xc441ec30
    ctx->pc = 0x270950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270954: 0x3c0142a0
    ctx->pc = 0x270954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x270958: 0x44810000
    ctx->pc = 0x270958u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27095c: 0x46010036
    ctx->pc = 0x27095cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270960: 0x0
    ctx->pc = 0x270960u;
    // NOP
    // 0x270964: 0x45010006
    ctx->pc = 0x270964u;
    {
        const bool branch_taken_0x270964 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270968u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x270964) {
            ctx->pc = 0x270980u;
            goto label_270980;
        }
    }
    ctx->pc = 0x27096Cu;
    // 0x27096c: 0x3c020034
    ctx->pc = 0x27096cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270970: 0x8c42cdb8
    ctx->pc = 0x270970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x270974: 0x4410203
    ctx->pc = 0x270974u;
    {
        const bool branch_taken_0x270974 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x270974) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x27097Cu;
    // 0x27097c: 0x2404003c
    ctx->pc = 0x27097cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
label_270980:
    // 0x270980: 0xc09c148
    ctx->pc = 0x270980u;
    SET_GPR_U32(ctx, 31, 0x270988u);
    ctx->pc = 0x270984u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270988u; }
    }
    if (ctx->pc != 0x270988u) { return; }
    ctx->pc = 0x270988u;
label_270988:
    // 0x270988: 0x100001fe
    ctx->pc = 0x270988u;
    {
        const bool branch_taken_0x270988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27098Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x270988) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270990u;
label_270990:
    // 0x270990: 0x3c020034
    ctx->pc = 0x270990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_270994:
    // 0x270994: 0x8c42f924
    ctx->pc = 0x270994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x270998: 0x24420028
    ctx->pc = 0x270998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x27099c: 0x44821000
    ctx->pc = 0x27099cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x2709a0: 0x468010a0
    ctx->pc = 0x2709a0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2709a4: 0x46151034
    ctx->pc = 0x2709a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2709a8: 0x0
    ctx->pc = 0x2709a8u;
    // NOP
    // 0x2709ac: 0x45000041
    ctx->pc = 0x2709ACu;
    {
        const bool branch_taken_0x2709ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2709B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2709ac) {
            ctx->pc = 0x270AB4u;
            goto label_270ab4;
        }
    }
    ctx->pc = 0x2709B4u;
    // 0x2709b4: 0x8c42f920
    ctx->pc = 0x2709b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x2709b8: 0x2442ffec
    ctx->pc = 0x2709b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2709bc: 0x44820800
    ctx->pc = 0x2709bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2709c0: 0x46800860
    ctx->pc = 0x2709c0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2709c4: 0x4601a834
    ctx->pc = 0x2709c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2709c8: 0x0
    ctx->pc = 0x2709c8u;
    // NOP
    // 0x2709cc: 0x45000039
    ctx->pc = 0x2709CCu;
    {
        const bool branch_taken_0x2709cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2709D0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2709cc) {
            ctx->pc = 0x270AB4u;
            goto label_270ab4;
        }
    }
    ctx->pc = 0x2709D4u;
    // 0x2709d4: 0x46001034
    ctx->pc = 0x2709d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2709d8: 0x0
    ctx->pc = 0x2709d8u;
    // NOP
    // 0x2709dc: 0x45000036
    ctx->pc = 0x2709DCu;
    {
        const bool branch_taken_0x2709dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2709E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2709dc) {
            ctx->pc = 0x270AB8u;
            goto label_270ab8;
        }
    }
    ctx->pc = 0x2709E4u;
    // 0x2709e4: 0x46010034
    ctx->pc = 0x2709e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2709e8: 0x0
    ctx->pc = 0x2709e8u;
    // NOP
    // 0x2709ec: 0x45000031
    ctx->pc = 0x2709ECu;
    {
        const bool branch_taken_0x2709ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2709F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
        if (branch_taken_0x2709ec) {
            ctx->pc = 0x270AB4u;
            goto label_270ab4;
        }
    }
    ctx->pc = 0x2709F4u;
    // 0x2709f4: 0xc4420008
    ctx->pc = 0x2709f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2709f8: 0x4602a041
    ctx->pc = 0x2709f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2709fc: 0x46000845
    ctx->pc = 0x2709fcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x270a00: 0xc7a00040
    ctx->pc = 0x270a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270a04: 0x46020001
    ctx->pc = 0x270a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x270a08: 0x46000005
    ctx->pc = 0x270a08u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x270a0c: 0x46010034
    ctx->pc = 0x270a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a10: 0x0
    ctx->pc = 0x270a10u;
    // NOP
    // 0x270a14: 0x45000027
    ctx->pc = 0x270A14u;
    {
        const bool branch_taken_0x270a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270a14) {
            ctx->pc = 0x270AB4u;
            goto label_270ab4;
        }
    }
    ctx->pc = 0x270A1Cu;
    // 0x270a1c: 0x8c42f8fc
    ctx->pc = 0x270a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x270a20: 0x28420002
    ctx->pc = 0x270a20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x270a24: 0x144001d7
    ctx->pc = 0x270A24u;
    {
        const bool branch_taken_0x270a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x270A28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x270a24) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270A2Cu;
    // 0x270a2c: 0x3c020034
    ctx->pc = 0x270a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270a30: 0x8c42f918
    ctx->pc = 0x270a30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x270a34: 0x2442001e
    ctx->pc = 0x270a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x270a38: 0x44820000
    ctx->pc = 0x270a38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270a3c: 0x46800020
    ctx->pc = 0x270a3cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270a40: 0x4600a036
    ctx->pc = 0x270a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a44: 0x0
    ctx->pc = 0x270a44u;
    // NOP
    // 0x270a48: 0x4501000a
    ctx->pc = 0x270A48u;
    {
        const bool branch_taken_0x270a48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270a48) {
            ctx->pc = 0x270A74u;
            goto label_270a74;
        }
    }
    ctx->pc = 0x270A50u;
    // 0x270a50: 0x3c020034
    ctx->pc = 0x270a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270a54: 0x8c42f91c
    ctx->pc = 0x270a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x270a58: 0x2442ffe2
    ctx->pc = 0x270a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x270a5c: 0x44820000
    ctx->pc = 0x270a5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270a60: 0x46800020
    ctx->pc = 0x270a60u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270a64: 0x46140036
    ctx->pc = 0x270a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a68: 0x0
    ctx->pc = 0x270a68u;
    // NOP
    // 0x270a6c: 0x4500000f
    ctx->pc = 0x270A6Cu;
    {
        const bool branch_taken_0x270a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270a6c) {
            ctx->pc = 0x270AACu;
            goto label_270aac;
        }
    }
    ctx->pc = 0x270A74u;
label_270a74:
    // 0x270a74: 0xc441ec30
    ctx->pc = 0x270a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a78: 0x3c0142a0
    ctx->pc = 0x270a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x270a7c: 0x44810000
    ctx->pc = 0x270a7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270a80: 0x46010036
    ctx->pc = 0x270a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a84: 0x0
    ctx->pc = 0x270a84u;
    // NOP
    // 0x270a88: 0x45010006
    ctx->pc = 0x270A88u;
    {
        const bool branch_taken_0x270a88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270A8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x270a88) {
            ctx->pc = 0x270AA4u;
            goto label_270aa4;
        }
    }
    ctx->pc = 0x270A90u;
    // 0x270a90: 0x3c020034
    ctx->pc = 0x270a90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270a94: 0x8c42cdb8
    ctx->pc = 0x270a94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x270a98: 0x44101ba
    ctx->pc = 0x270A98u;
    {
        const bool branch_taken_0x270a98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270A9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x270a98) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270AA0u;
    // 0x270aa0: 0x2404003c
    ctx->pc = 0x270aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
label_270aa4:
    // 0x270aa4: 0xc09c148
    ctx->pc = 0x270AA4u;
    SET_GPR_U32(ctx, 31, 0x270AACu);
    ctx->pc = 0x270AA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270AACu; }
    }
    if (ctx->pc != 0x270AACu) { return; }
    ctx->pc = 0x270AACu;
label_270aac:
    // 0x270aac: 0x100001b5
    ctx->pc = 0x270AACu;
    {
        const bool branch_taken_0x270aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x270aac) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270AB4u;
label_270ab4:
    // 0x270ab4: 0x3c02003a
    ctx->pc = 0x270ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_270ab8:
    // 0x270ab8: 0x8c421bd0
    ctx->pc = 0x270ab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x270abc: 0xc442000c
    ctx->pc = 0x270abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270ac0: 0x4602a841
    ctx->pc = 0x270ac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x270ac4: 0x46000845
    ctx->pc = 0x270ac4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x270ac8: 0xc7a00044
    ctx->pc = 0x270ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270acc: 0x46020001
    ctx->pc = 0x270accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x270ad0: 0x46000005
    ctx->pc = 0x270ad0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x270ad4: 0x46010034
    ctx->pc = 0x270ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ad8: 0x0
    ctx->pc = 0x270ad8u;
    // NOP
    // 0x270adc: 0x45000042
    ctx->pc = 0x270ADCu;
    {
        const bool branch_taken_0x270adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270AE0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x270adc) {
            ctx->pc = 0x270BE8u;
            goto label_270be8;
        }
    }
    ctx->pc = 0x270AE4u;
    // 0x270ae4: 0xc4420008
    ctx->pc = 0x270ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270ae8: 0x4602a041
    ctx->pc = 0x270ae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x270aec: 0x46000845
    ctx->pc = 0x270aecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x270af0: 0x46020001
    ctx->pc = 0x270af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x270af4: 0x46000005
    ctx->pc = 0x270af4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x270af8: 0x46010034
    ctx->pc = 0x270af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270afc: 0x0
    ctx->pc = 0x270afcu;
    // NOP
    // 0x270b00: 0x45000039
    ctx->pc = 0x270B00u;
    {
        const bool branch_taken_0x270b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270B04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270b00) {
            ctx->pc = 0x270BE8u;
            goto label_270be8;
        }
    }
    ctx->pc = 0x270B08u;
    // 0x270b08: 0x8c42f8fc
    ctx->pc = 0x270b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x270b0c: 0x28420002
    ctx->pc = 0x270b0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x270b10: 0x1440019c
    ctx->pc = 0x270B10u;
    {
        const bool branch_taken_0x270b10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x270B14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x270b10) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270B18u;
    // 0x270b18: 0x3c020034
    ctx->pc = 0x270b18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270b1c: 0x8c42f918
    ctx->pc = 0x270b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x270b20: 0x2442001e
    ctx->pc = 0x270b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x270b24: 0x44820000
    ctx->pc = 0x270b24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270b28: 0x46800020
    ctx->pc = 0x270b28u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270b2c: 0x4600a036
    ctx->pc = 0x270b2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b30: 0x0
    ctx->pc = 0x270b30u;
    // NOP
    // 0x270b34: 0x4501001c
    ctx->pc = 0x270B34u;
    {
        const bool branch_taken_0x270b34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270B38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270b34) {
            ctx->pc = 0x270BA8u;
            goto label_270ba8;
        }
    }
    ctx->pc = 0x270B3Cu;
    // 0x270b3c: 0x3c020034
    ctx->pc = 0x270b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270b40: 0x8c42f91c
    ctx->pc = 0x270b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x270b44: 0x2442ffe2
    ctx->pc = 0x270b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x270b48: 0x44820000
    ctx->pc = 0x270b48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270b4c: 0x46800020
    ctx->pc = 0x270b4cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270b50: 0x46140036
    ctx->pc = 0x270b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b54: 0x0
    ctx->pc = 0x270b54u;
    // NOP
    // 0x270b58: 0x45010013
    ctx->pc = 0x270B58u;
    {
        const bool branch_taken_0x270b58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270B5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270b58) {
            ctx->pc = 0x270BA8u;
            goto label_270ba8;
        }
    }
    ctx->pc = 0x270B60u;
    // 0x270b60: 0x3c020034
    ctx->pc = 0x270b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270b64: 0x8c42f924
    ctx->pc = 0x270b64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x270b68: 0x24420028
    ctx->pc = 0x270b68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x270b6c: 0x44820000
    ctx->pc = 0x270b6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270b70: 0x46800020
    ctx->pc = 0x270b70u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270b74: 0x4600a836
    ctx->pc = 0x270b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b78: 0x0
    ctx->pc = 0x270b78u;
    // NOP
    // 0x270b7c: 0x4501000a
    ctx->pc = 0x270B7Cu;
    {
        const bool branch_taken_0x270b7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270B80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270b7c) {
            ctx->pc = 0x270BA8u;
            goto label_270ba8;
        }
    }
    ctx->pc = 0x270B84u;
    // 0x270b84: 0x3c020034
    ctx->pc = 0x270b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270b88: 0x8c42f920
    ctx->pc = 0x270b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x270b8c: 0x2442ffec
    ctx->pc = 0x270b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x270b90: 0x44820000
    ctx->pc = 0x270b90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270b94: 0x46800020
    ctx->pc = 0x270b94u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270b98: 0x46150036
    ctx->pc = 0x270b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b9c: 0x0
    ctx->pc = 0x270b9cu;
    // NOP
    // 0x270ba0: 0x4500000f
    ctx->pc = 0x270BA0u;
    {
        const bool branch_taken_0x270ba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270BA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270ba0) {
            ctx->pc = 0x270BE0u;
            goto label_270be0;
        }
    }
    ctx->pc = 0x270BA8u;
label_270ba8:
    // 0x270ba8: 0xc441ec30
    ctx->pc = 0x270ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270bac: 0x3c0142a0
    ctx->pc = 0x270bacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x270bb0: 0x44810000
    ctx->pc = 0x270bb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270bb4: 0x46010036
    ctx->pc = 0x270bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270bb8: 0x0
    ctx->pc = 0x270bb8u;
    // NOP
    // 0x270bbc: 0x45010006
    ctx->pc = 0x270BBCu;
    {
        const bool branch_taken_0x270bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270BC0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x270bbc) {
            ctx->pc = 0x270BD8u;
            goto label_270bd8;
        }
    }
    ctx->pc = 0x270BC4u;
    // 0x270bc4: 0x3c020034
    ctx->pc = 0x270bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270bc8: 0x8c42cdb8
    ctx->pc = 0x270bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x270bcc: 0x441016d
    ctx->pc = 0x270BCCu;
    {
        const bool branch_taken_0x270bcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270BD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x270bcc) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270BD4u;
    // 0x270bd4: 0x2404003c
    ctx->pc = 0x270bd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
label_270bd8:
    // 0x270bd8: 0xc09c148
    ctx->pc = 0x270BD8u;
    SET_GPR_U32(ctx, 31, 0x270BE0u);
    ctx->pc = 0x270BDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BE0u; }
    }
    if (ctx->pc != 0x270BE0u) { return; }
    ctx->pc = 0x270BE0u;
label_270be0:
    // 0x270be0: 0x10000168
    ctx->pc = 0x270BE0u;
    {
        const bool branch_taken_0x270be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270BE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x270be0) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x270BE8u;
label_270be8:
    // 0x270be8: 0x3c020034
    ctx->pc = 0x270be8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270bec: 0x8c42f918
    ctx->pc = 0x270becu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x270bf0: 0x2442001e
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x270bf4: 0x44820000
    ctx->pc = 0x270bf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270bf8: 0x46800020
    ctx->pc = 0x270bf8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270bfc: 0xc7a10040
    ctx->pc = 0x270bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270c00: 0x46000836
    ctx->pc = 0x270c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270c04: 0x0
    ctx->pc = 0x270c04u;
    // NOP
    // 0x270c08: 0x4501001d
    ctx->pc = 0x270C08u;
    {
        const bool branch_taken_0x270c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270C0Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 20), 31));
        if (branch_taken_0x270c08) {
            ctx->pc = 0x270C80u;
            goto label_270c80;
        }
    }
    ctx->pc = 0x270C10u;
    // 0x270c10: 0x3c020034
    ctx->pc = 0x270c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270c14: 0x8c42f91c
    ctx->pc = 0x270c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x270c18: 0x2442ffe2
    ctx->pc = 0x270c18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x270c1c: 0x44820000
    ctx->pc = 0x270c1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270c20: 0x46800020
    ctx->pc = 0x270c20u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270c24: 0x46010036
    ctx->pc = 0x270c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270c28: 0x0
    ctx->pc = 0x270c28u;
    // NOP
    // 0x270c2c: 0x45010014
    ctx->pc = 0x270C2Cu;
    {
        const bool branch_taken_0x270c2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270C30u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 20), 31));
        if (branch_taken_0x270c2c) {
            ctx->pc = 0x270C80u;
            goto label_270c80;
        }
    }
    ctx->pc = 0x270C34u;
    // 0x270c34: 0x3c020034
    ctx->pc = 0x270c34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270c38: 0x8c42f924
    ctx->pc = 0x270c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x270c3c: 0x24420028
    ctx->pc = 0x270c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x270c40: 0x44820000
    ctx->pc = 0x270c40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270c44: 0x46800020
    ctx->pc = 0x270c44u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270c48: 0xc7a10044
    ctx->pc = 0x270c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270c4c: 0x46000836
    ctx->pc = 0x270c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270c50: 0x0
    ctx->pc = 0x270c50u;
    // NOP
    // 0x270c54: 0x4501000a
    ctx->pc = 0x270C54u;
    {
        const bool branch_taken_0x270c54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270C58u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 20), 31));
        if (branch_taken_0x270c54) {
            ctx->pc = 0x270C80u;
            goto label_270c80;
        }
    }
    ctx->pc = 0x270C5Cu;
    // 0x270c5c: 0x3c020034
    ctx->pc = 0x270c5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270c60: 0x8c42f920
    ctx->pc = 0x270c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x270c64: 0x2442ffec
    ctx->pc = 0x270c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x270c68: 0x44820000
    ctx->pc = 0x270c68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270c6c: 0x46800020
    ctx->pc = 0x270c6cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270c70: 0x46010036
    ctx->pc = 0x270c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270c74: 0x0
    ctx->pc = 0x270c74u;
    // NOP
    // 0x270c78: 0x45000120
    ctx->pc = 0x270C78u;
    {
        const bool branch_taken_0x270c78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270C7Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 20), 31));
        if (branch_taken_0x270c78) {
            ctx->pc = 0x2710FCu;
            goto label_2710fc;
        }
    }
    ctx->pc = 0x270C80u;
label_270c80:
    // 0x270c80: 0x2821021
    ctx->pc = 0x270c80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x270c84: 0x21043
    ctx->pc = 0x270c84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x270c88: 0x44821000
    ctx->pc = 0x270c88u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x270c8c: 0x468010a0
    ctx->pc = 0x270c8cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x270c90: 0x4602a0c1
    ctx->pc = 0x270c90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x270c94: 0x26a2ffc0
    ctx->pc = 0x270c94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294967232));
    // 0x270c98: 0x44820800
    ctx->pc = 0x270c98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x270c9c: 0x46800860
    ctx->pc = 0x270c9cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x270ca0: 0x4601a801
    ctx->pc = 0x270ca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x270ca4: 0x46031dc2
    ctx->pc = 0x270ca4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x270ca8: 0x46000002
    ctx->pc = 0x270ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270cac: 0x4600bdc0
    ctx->pc = 0x270cacu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x270cb0: 0xc7a00040
    ctx->pc = 0x270cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cb4: 0x460200c1
    ctx->pc = 0x270cb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x270cb8: 0xc7a00044
    ctx->pc = 0x270cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cbc: 0x46010001
    ctx->pc = 0x270cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270cc0: 0x46031d82
    ctx->pc = 0x270cc0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x270cc4: 0x46000002
    ctx->pc = 0x270cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270cc8: 0x4600b580
    ctx->pc = 0x270cc8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x270ccc: 0xc6030050
    ctx->pc = 0x270cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270cd0: 0xc6000810
    ctx->pc = 0x270cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cd4: 0x460018c0
    ctx->pc = 0x270cd4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x270cd8: 0xc6020054
    ctx->pc = 0x270cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270cdc: 0xc6000814
    ctx->pc = 0x270cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270ce0: 0x46001080
    ctx->pc = 0x270ce0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x270ce4: 0xc6010058
    ctx->pc = 0x270ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270ce8: 0xc6000818
    ctx->pc = 0x270ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cec: 0x46000840
    ctx->pc = 0x270cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270cf0: 0x3c020034
    ctx->pc = 0x270cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270cf4: 0x2442eb60
    ctx->pc = 0x270cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x270cf8: 0xc4400140
    ctx->pc = 0x270cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cfc: 0x460018c1
    ctx->pc = 0x270cfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x270d00: 0xe7a30010
    ctx->pc = 0x270d00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x270d04: 0xc4400144
    ctx->pc = 0x270d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270d08: 0x46001081
    ctx->pc = 0x270d08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270d0c: 0xe7a20014
    ctx->pc = 0x270d0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x270d10: 0xc4400148
    ctx->pc = 0x270d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270d14: 0x46000841
    ctx->pc = 0x270d14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270d18: 0xe7a10018
    ctx->pc = 0x270d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x270d1c: 0xc6400000
    ctx->pc = 0x270d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270d20: 0x46001800
    ctx->pc = 0x270d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x270d24: 0xe7a00020
    ctx->pc = 0x270d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270d28: 0xc6400004
    ctx->pc = 0x270d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270d2c: 0x46001000
    ctx->pc = 0x270d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x270d30: 0xe7a00024
    ctx->pc = 0x270d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270d34: 0xc6400008
    ctx->pc = 0x270d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270d38: 0x46000800
    ctx->pc = 0x270d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270d3c: 0xe7a00028
    ctx->pc = 0x270d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x270d40: 0x46031802
    ctx->pc = 0x270d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x270d44: 0x46021082
    ctx->pc = 0x270d44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270d48: 0x46020000
    ctx->pc = 0x270d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x270d4c: 0x46010842
    ctx->pc = 0x270d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x270d50: 0x46010000
    ctx->pc = 0x270d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270d54: 0x0
    ctx->pc = 0x270d54u;
    // NOP
    // 0x270d58: 0x0
    ctx->pc = 0x270d58u;
    // NOP
    // 0x270d5c: 0x46000004
    ctx->pc = 0x270d5cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x270d60: 0x46000032
    ctx->pc = 0x270d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270d64: 0x0
    ctx->pc = 0x270d64u;
    // NOP
    // 0x270d68: 0x45010006
    ctx->pc = 0x270D68u;
    {
        const bool branch_taken_0x270d68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270D6Cu;
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x270d68) {
            ctx->pc = 0x270D84u;
            goto label_270d84;
        }
    }
    ctx->pc = 0x270D70u;
    // 0x270d70: 0x46031b02
    ctx->pc = 0x270d70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x270d74: 0x46026300
    ctx->pc = 0x270d74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x270d78: 0xc0ba284
    ctx->pc = 0x270D78u;
    SET_GPR_U32(ctx, 31, 0x270D80u);
    ctx->pc = 0x270D7Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270D80u; }
    }
    if (ctx->pc != 0x270D80u) { return; }
    ctx->pc = 0x270D80u;
    // 0x270d80: 0x46000606
    ctx->pc = 0x270d80u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_270d84:
    // 0x270d84: 0xc7ac0020
    ctx->pc = 0x270d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270d88: 0x460c6002
    ctx->pc = 0x270d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x270d8c: 0xc7a10024
    ctx->pc = 0x270d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270d90: 0x46010882
    ctx->pc = 0x270d90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x270d94: 0x46020000
    ctx->pc = 0x270d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x270d98: 0xc7a10028
    ctx->pc = 0x270d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270d9c: 0x46010842
    ctx->pc = 0x270d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x270da0: 0x46010000
    ctx->pc = 0x270da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270da4: 0x0
    ctx->pc = 0x270da4u;
    // NOP
    // 0x270da8: 0x0
    ctx->pc = 0x270da8u;
    // NOP
    // 0x270dac: 0x46000004
    ctx->pc = 0x270dacu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x270db0: 0x46000032
    ctx->pc = 0x270db0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270db4: 0x0
    ctx->pc = 0x270db4u;
    // NOP
    // 0x270db8: 0x45010006
    ctx->pc = 0x270DB8u;
    {
        const bool branch_taken_0x270db8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270DBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x270db8) {
            ctx->pc = 0x270DD4u;
            goto label_270dd4;
        }
    }
    ctx->pc = 0x270DC0u;
    // 0x270dc0: 0x460c6302
    ctx->pc = 0x270dc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x270dc4: 0x46026300
    ctx->pc = 0x270dc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x270dc8: 0xc0ba284
    ctx->pc = 0x270DC8u;
    SET_GPR_U32(ctx, 31, 0x270DD0u);
    ctx->pc = 0x270DCCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DD0u; }
    }
    if (ctx->pc != 0x270DD0u) { return; }
    ctx->pc = 0x270DD0u;
    // 0x270dd0: 0x3c020036
    ctx->pc = 0x270dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_270dd4:
    // 0x270dd4: 0x8c42d934
    ctx->pc = 0x270dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x270dd8: 0x4410004
    ctx->pc = 0x270DD8u;
    {
        const bool branch_taken_0x270dd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x270dd8) {
            ctx->pc = 0x270DECu;
            goto label_270dec;
        }
    }
    ctx->pc = 0x270DE0u;
    // 0x270de0: 0x4600c034
    ctx->pc = 0x270de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270de4: 0x10000020
    ctx->pc = 0x270DE4u;
    {
        const bool branch_taken_0x270de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x270de4) {
            ctx->pc = 0x270E68u;
            goto label_270e68;
        }
    }
    ctx->pc = 0x270DECu;
label_270dec:
    // 0x270dec: 0x4616b834
    ctx->pc = 0x270decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270df0: 0x0
    ctx->pc = 0x270df0u;
    // NOP
    // 0x270df4: 0x45000054
    ctx->pc = 0x270DF4u;
    {
        const bool branch_taken_0x270df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270DF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270df4) {
            ctx->pc = 0x270F48u;
            goto label_270f48;
        }
    }
    ctx->pc = 0x270DFCu;
    // 0x270dfc: 0x2442eb60
    ctx->pc = 0x270dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x270e00: 0xc4420140
    ctx->pc = 0x270e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270e04: 0xc6000060
    ctx->pc = 0x270e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270e08: 0x46001081
    ctx->pc = 0x270e08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270e0c: 0xc4430144
    ctx->pc = 0x270e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270e10: 0xc6000064
    ctx->pc = 0x270e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270e14: 0x460018c1
    ctx->pc = 0x270e14u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x270e18: 0xc4400148
    ctx->pc = 0x270e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270e1c: 0xc6010068
    ctx->pc = 0x270e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270e20: 0x46010001
    ctx->pc = 0x270e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270e24: 0x46021102
    ctx->pc = 0x270e24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270e28: 0x46000042
    ctx->pc = 0x270e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270e2c: 0x46012100
    ctx->pc = 0x270e2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x270e30: 0xc6410000
    ctx->pc = 0x270e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270e34: 0x46011081
    ctx->pc = 0x270e34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x270e38: 0xe7a20030
    ctx->pc = 0x270e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x270e3c: 0xc6410004
    ctx->pc = 0x270e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270e40: 0x460118c1
    ctx->pc = 0x270e40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x270e44: 0xe7a30034
    ctx->pc = 0x270e44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x270e48: 0xc6410008
    ctx->pc = 0x270e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270e4c: 0x46010001
    ctx->pc = 0x270e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270e50: 0xe7a00038
    ctx->pc = 0x270e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x270e54: 0x46021082
    ctx->pc = 0x270e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270e58: 0x46000002
    ctx->pc = 0x270e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270e5c: 0x46001080
    ctx->pc = 0x270e5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x270e60: 0x46022034
    ctx->pc = 0x270e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270e64: 0x0
    ctx->pc = 0x270e64u;
    // NOP
label_270e68:
    // 0x270e68: 0x45000037
    ctx->pc = 0x270E68u;
    {
        const bool branch_taken_0x270e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270E6Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x270e68) {
            ctx->pc = 0x270F48u;
            goto label_270f48;
        }
    }
    ctx->pc = 0x270E70u;
    // 0x270e70: 0x46000064
    ctx->pc = 0x270e70u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x270e74: 0x44030800
    ctx->pc = 0x270e74u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x270e78: 0x4600a024
    ctx->pc = 0x270e78u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x270e7c: 0x44020000
    ctx->pc = 0x270e7cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x270e80: 0x0
    ctx->pc = 0x270e80u;
    // NOP
    // 0x270e84: 0x14620014
    ctx->pc = 0x270E84u;
    {
        const bool branch_taken_0x270e84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x270E88u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x270e84) {
            ctx->pc = 0x270ED8u;
            goto label_270ed8;
        }
    }
    ctx->pc = 0x270E8Cu;
    // 0x270e8c: 0x3c020034
    ctx->pc = 0x270e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270e90: 0x8c42f924
    ctx->pc = 0x270e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x270e94: 0x24420028
    ctx->pc = 0x270e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x270e98: 0x44820000
    ctx->pc = 0x270e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270e9c: 0x46800020
    ctx->pc = 0x270e9cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270ea0: 0xc7a10044
    ctx->pc = 0x270ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270ea4: 0x46010034
    ctx->pc = 0x270ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ea8: 0x0
    ctx->pc = 0x270ea8u;
    // NOP
    // 0x270eac: 0x45000009
    ctx->pc = 0x270EACu;
    {
        const bool branch_taken_0x270eac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270EB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270eac) {
            ctx->pc = 0x270ED4u;
            goto label_270ed4;
        }
    }
    ctx->pc = 0x270EB4u;
    // 0x270eb4: 0x8c42f920
    ctx->pc = 0x270eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x270eb8: 0x2442ffec
    ctx->pc = 0x270eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x270ebc: 0x44820000
    ctx->pc = 0x270ebcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270ec0: 0x46800020
    ctx->pc = 0x270ec0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270ec4: 0x46000834
    ctx->pc = 0x270ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ec8: 0x0
    ctx->pc = 0x270ec8u;
    // NOP
    // 0x270ecc: 0x4501001f
    ctx->pc = 0x270ECCu;
    {
        const bool branch_taken_0x270ecc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270ecc) {
            ctx->pc = 0x270F4Cu;
            goto label_270f4c;
        }
    }
    ctx->pc = 0x270ED4u;
label_270ed4:
    // 0x270ed4: 0xc7a00044
    ctx->pc = 0x270ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_270ed8:
    // 0x270ed8: 0x46000064
    ctx->pc = 0x270ed8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x270edc: 0x44030800
    ctx->pc = 0x270edcu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x270ee0: 0x4600a824
    ctx->pc = 0x270ee0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[21]);
    // 0x270ee4: 0x44020000
    ctx->pc = 0x270ee4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x270ee8: 0x0
    ctx->pc = 0x270ee8u;
    // NOP
    // 0x270eec: 0x54620014
    ctx->pc = 0x270EECu;
    {
        const bool branch_taken_0x270eec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x270eec) {
            ctx->pc = 0x270EF0u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x270F40u;
            goto label_270f40;
        }
    }
    ctx->pc = 0x270EF4u;
    // 0x270ef4: 0x3c020034
    ctx->pc = 0x270ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270ef8: 0x8c42f918
    ctx->pc = 0x270ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x270efc: 0x2442001e
    ctx->pc = 0x270efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x270f00: 0x44820000
    ctx->pc = 0x270f00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270f04: 0x46800020
    ctx->pc = 0x270f04u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270f08: 0xc7a10040
    ctx->pc = 0x270f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270f0c: 0x46010034
    ctx->pc = 0x270f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270f10: 0x0
    ctx->pc = 0x270f10u;
    // NOP
    // 0x270f14: 0x45000009
    ctx->pc = 0x270F14u;
    {
        const bool branch_taken_0x270f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270F18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270f14) {
            ctx->pc = 0x270F3Cu;
            goto label_270f3c;
        }
    }
    ctx->pc = 0x270F1Cu;
    // 0x270f1c: 0x8c42f91c
    ctx->pc = 0x270f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x270f20: 0x2442ffe2
    ctx->pc = 0x270f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x270f24: 0x44820000
    ctx->pc = 0x270f24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270f28: 0x46800020
    ctx->pc = 0x270f28u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270f2c: 0x46000834
    ctx->pc = 0x270f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270f30: 0x0
    ctx->pc = 0x270f30u;
    // NOP
    // 0x270f34: 0x45010005
    ctx->pc = 0x270F34u;
    {
        const bool branch_taken_0x270f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270F38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270f34) {
            ctx->pc = 0x270F4Cu;
            goto label_270f4c;
        }
    }
    ctx->pc = 0x270F3Cu;
label_270f3c:
    // 0x270f3c: 0xae400000
    ctx->pc = 0x270f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_270f40:
    // 0x270f40: 0xae400004
    ctx->pc = 0x270f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x270f44: 0xae400008
    ctx->pc = 0x270f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_270f48:
    // 0x270f48: 0x3c020034
    ctx->pc = 0x270f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_270f4c:
    // 0x270f4c: 0x8c42f918
    ctx->pc = 0x270f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965528)));
    // 0x270f50: 0x2442001e
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x270f54: 0x44820000
    ctx->pc = 0x270f54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270f58: 0x46800020
    ctx->pc = 0x270f58u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270f5c: 0x4600a036
    ctx->pc = 0x270f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270f60: 0x0
    ctx->pc = 0x270f60u;
    // NOP
    // 0x270f64: 0x4501001c
    ctx->pc = 0x270F64u;
    {
        const bool branch_taken_0x270f64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270F68u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x270f64) {
            ctx->pc = 0x270FD8u;
            goto label_270fd8;
        }
    }
    ctx->pc = 0x270F6Cu;
    // 0x270f6c: 0x3c020034
    ctx->pc = 0x270f6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270f70: 0x8c42f91c
    ctx->pc = 0x270f70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965532)));
    // 0x270f74: 0x2442ffe2
    ctx->pc = 0x270f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x270f78: 0x44820000
    ctx->pc = 0x270f78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270f7c: 0x46800020
    ctx->pc = 0x270f7cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270f80: 0x46140036
    ctx->pc = 0x270f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270f84: 0x0
    ctx->pc = 0x270f84u;
    // NOP
    // 0x270f88: 0x45010014
    ctx->pc = 0x270F88u;
    {
        const bool branch_taken_0x270f88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270F8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x270f88) {
            ctx->pc = 0x270FDCu;
            goto label_270fdc;
        }
    }
    ctx->pc = 0x270F90u;
    // 0x270f90: 0x3c020034
    ctx->pc = 0x270f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270f94: 0x8c42f924
    ctx->pc = 0x270f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965540)));
    // 0x270f98: 0x24420028
    ctx->pc = 0x270f98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x270f9c: 0x44820000
    ctx->pc = 0x270f9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270fa0: 0x46800020
    ctx->pc = 0x270fa0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270fa4: 0x4600a836
    ctx->pc = 0x270fa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270fa8: 0x0
    ctx->pc = 0x270fa8u;
    // NOP
    // 0x270fac: 0x4501000b
    ctx->pc = 0x270FACu;
    {
        const bool branch_taken_0x270fac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270FB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x270fac) {
            ctx->pc = 0x270FDCu;
            goto label_270fdc;
        }
    }
    ctx->pc = 0x270FB4u;
    // 0x270fb4: 0x3c020034
    ctx->pc = 0x270fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270fb8: 0x8c42f920
    ctx->pc = 0x270fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965536)));
    // 0x270fbc: 0x2442ffec
    ctx->pc = 0x270fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x270fc0: 0x44820000
    ctx->pc = 0x270fc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x270fc4: 0x46800020
    ctx->pc = 0x270fc4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x270fc8: 0x46150036
    ctx->pc = 0x270fc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270fcc: 0x0
    ctx->pc = 0x270fccu;
    // NOP
    // 0x270fd0: 0x45000004
    ctx->pc = 0x270FD0u;
    {
        const bool branch_taken_0x270fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270FD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x270fd0) {
            ctx->pc = 0x270FE4u;
            goto label_270fe4;
        }
    }
    ctx->pc = 0x270FD8u;
label_270fd8:
    // 0x270fd8: 0x24020001
    ctx->pc = 0x270fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_270fdc:
    // 0x270fdc: 0x10000006
    ctx->pc = 0x270FDCu;
    {
        const bool branch_taken_0x270fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270FE0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965760), GPR_U32(ctx, 2));
        if (branch_taken_0x270fdc) {
            ctx->pc = 0x270FF8u;
            goto label_270ff8;
        }
    }
    ctx->pc = 0x270FE4u;
label_270fe4:
    // 0x270fe4: 0x8c42d934
    ctx->pc = 0x270fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x270fe8: 0x4400007
    ctx->pc = 0x270FE8u;
    {
        const bool branch_taken_0x270fe8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270fe8) {
            ctx->pc = 0x271008u;
            goto label_271008;
        }
    }
    ctx->pc = 0x270FF0u;
    // 0x270ff0: 0xc09c4ca
    ctx->pc = 0x270FF0u;
    SET_GPR_U32(ctx, 31, 0x270FF8u);
    ctx->pc = 0x270FF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x271328u;
    {
        const uint32_t __entryPc = ctx->pc;
        someone_will_be_off_screen_0x271328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270FF8u; }
    }
    if (ctx->pc != 0x270FF8u) { return; }
    ctx->pc = 0x270FF8u;
label_270ff8:
    // 0x270ff8: 0x3c020036
    ctx->pc = 0x270ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x270ffc: 0x8c42d934
    ctx->pc = 0x270ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x271000: 0x4410004
    ctx->pc = 0x271000u;
    {
        const bool branch_taken_0x271000 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x271004u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x271000) {
            ctx->pc = 0x271014u;
            goto label_271014;
        }
    }
    ctx->pc = 0x271008u;
label_271008:
    // 0x271008: 0xc09c4ca
    ctx->pc = 0x271008u;
    SET_GPR_U32(ctx, 31, 0x271010u);
    ctx->pc = 0x27100Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x271328u;
    {
        const uint32_t __entryPc = ctx->pc;
        someone_will_be_off_screen_0x271328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271010u; }
    }
    if (ctx->pc != 0x271010u) { return; }
    ctx->pc = 0x271010u;
    // 0x271010: 0x3c020034
    ctx->pc = 0x271010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_271014:
    // 0x271014: 0x8c42cdb8
    ctx->pc = 0x271014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x271018: 0x441000a
    ctx->pc = 0x271018u;
    {
        const bool branch_taken_0x271018 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27101Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x271018) {
            ctx->pc = 0x271044u;
            goto label_271044;
        }
    }
    ctx->pc = 0x271020u;
    // 0x271020: 0x3c030034
    ctx->pc = 0x271020u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x271024: 0xc441ec30
    ctx->pc = 0x271024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271028: 0xc460f904
    ctx->pc = 0x271028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27102c: 0x46010036
    ctx->pc = 0x27102cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271030: 0x0
    ctx->pc = 0x271030u;
    // NOP
    // 0x271034: 0x4501000a
    ctx->pc = 0x271034u;
    {
        const bool branch_taken_0x271034 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x271038u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x271034) {
            ctx->pc = 0x271060u;
            goto label_271060;
        }
    }
    ctx->pc = 0x27103Cu;
    // 0x27103c: 0x10000051
    ctx->pc = 0x27103Cu;
    {
        const bool branch_taken_0x27103c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271040u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x27103c) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x271044u;
label_271044:
    // 0x271044: 0xc441ec30
    ctx->pc = 0x271044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271048: 0x3c0142a0
    ctx->pc = 0x271048u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x27104c: 0x44810000
    ctx->pc = 0x27104cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271050: 0x46010036
    ctx->pc = 0x271050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271054: 0x0
    ctx->pc = 0x271054u;
    // NOP
    // 0x271058: 0x45000026
    ctx->pc = 0x271058u;
    {
        const bool branch_taken_0x271058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27105Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x271058) {
            ctx->pc = 0x2710F4u;
            goto label_2710f4;
        }
    }
    ctx->pc = 0x271060u;
label_271060:
    // 0x271060: 0xc441f9fc
    ctx->pc = 0x271060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271064: 0x3c013f59
    ctx->pc = 0x271064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16217 << 16));
    // 0x271068: 0x3421999a
    ctx->pc = 0x271068u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x27106c: 0x44810000
    ctx->pc = 0x27106cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271070: 0x46010036
    ctx->pc = 0x271070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271074: 0x0
    ctx->pc = 0x271074u;
    // NOP
    // 0x271078: 0x4500001e
    ctx->pc = 0x271078u;
    {
        const bool branch_taken_0x271078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27107Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x271078) {
            ctx->pc = 0x2710F4u;
            goto label_2710f4;
        }
    }
    ctx->pc = 0x271080u;
    // 0x271080: 0x8c42d934
    ctx->pc = 0x271080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x271084: 0x4400014
    ctx->pc = 0x271084u;
    {
        const bool branch_taken_0x271084 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271088u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x271084) {
            ctx->pc = 0x2710D8u;
            goto label_2710d8;
        }
    }
    ctx->pc = 0x27108Cu;
    // 0x27108c: 0x8c42f8fc
    ctx->pc = 0x27108cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x271090: 0x28420002
    ctx->pc = 0x271090u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x271094: 0x1440003b
    ctx->pc = 0x271094u;
    {
        const bool branch_taken_0x271094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271098u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x271094) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x27109Cu;
    // 0x27109c: 0x3c020034
    ctx->pc = 0x27109cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2710a0: 0x8c42fa00
    ctx->pc = 0x2710a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965760)));
    // 0x2710a4: 0x14400006
    ctx->pc = 0x2710A4u;
    {
        const bool branch_taken_0x2710a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2710A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2710a4) {
            ctx->pc = 0x2710C0u;
            goto label_2710c0;
        }
    }
    ctx->pc = 0x2710ACu;
    // 0x2710ac: 0x2404003c
    ctx->pc = 0x2710acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2710b0: 0xc09c148
    ctx->pc = 0x2710B0u;
    SET_GPR_U32(ctx, 31, 0x2710B8u);
    ctx->pc = 0x2710B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710B8u; }
    }
    if (ctx->pc != 0x2710B8u) { return; }
    ctx->pc = 0x2710B8u;
    // 0x2710b8: 0x10000032
    ctx->pc = 0x2710B8u;
    {
        const bool branch_taken_0x2710b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2710BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2710b8) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x2710C0u;
label_2710c0:
    // 0x2710c0: 0xac40f934
    ctx->pc = 0x2710c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965556), GPR_U32(ctx, 0));
    // 0x2710c4: 0x3c020034
    ctx->pc = 0x2710c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2710c8: 0xac40f938
    ctx->pc = 0x2710c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965560), GPR_U32(ctx, 0));
    // 0x2710cc: 0x3c020034
    ctx->pc = 0x2710ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2710d0: 0x10000008
    ctx->pc = 0x2710D0u;
    {
        const bool branch_taken_0x2710d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2710D4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965564), GPR_U32(ctx, 0));
        if (branch_taken_0x2710d0) {
            ctx->pc = 0x2710F4u;
            goto label_2710f4;
        }
    }
    ctx->pc = 0x2710D8u;
label_2710d8:
    // 0x2710d8: 0x8c42f8fc
    ctx->pc = 0x2710d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x2710dc: 0x28420002
    ctx->pc = 0x2710dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2710e0: 0x14400028
    ctx->pc = 0x2710E0u;
    {
        const bool branch_taken_0x2710e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2710E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2710e0) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x2710E8u;
    // 0x2710e8: 0x2404003c
    ctx->pc = 0x2710e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2710ec: 0xc09c148
    ctx->pc = 0x2710ECu;
    SET_GPR_U32(ctx, 31, 0x2710F4u);
    ctx->pc = 0x2710F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2710F4u; }
    }
    if (ctx->pc != 0x2710F4u) { return; }
    ctx->pc = 0x2710F4u;
label_2710f4:
    // 0x2710f4: 0x10000023
    ctx->pc = 0x2710F4u;
    {
        const bool branch_taken_0x2710f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2710F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2710f4) {
            ctx->pc = 0x271184u;
            goto label_271184;
        }
    }
    ctx->pc = 0x2710FCu;
label_2710fc:
    // 0x2710fc: 0xc6010050
    ctx->pc = 0x2710fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271100: 0xe7a10000
    ctx->pc = 0x271100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x271104: 0xc6020054
    ctx->pc = 0x271104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271108: 0xe7a20004
    ctx->pc = 0x271108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27110c: 0xc6030058
    ctx->pc = 0x27110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x271110: 0xe7a30008
    ctx->pc = 0x271110u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x271114: 0xc6400000
    ctx->pc = 0x271114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271118: 0x46000840
    ctx->pc = 0x271118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27111c: 0xe6010050
    ctx->pc = 0x27111cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x271120: 0xc6400004
    ctx->pc = 0x271120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271124: 0x46001080
    ctx->pc = 0x271124u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x271128: 0xe6020054
    ctx->pc = 0x271128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x27112c: 0xc6400008
    ctx->pc = 0x27112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271130: 0x460018c0
    ctx->pc = 0x271130u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x271134: 0xe6030058
    ctx->pc = 0x271134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x271138: 0x26040020
    ctx->pc = 0x271138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x27113c: 0xc080ca2
    ctx->pc = 0x27113Cu;
    SET_GPR_U32(ctx, 31, 0x271144u);
    ctx->pc = 0x271140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2064));
    ctx->pc = 0x203288u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjAttnOffset_0x203288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271144u; }
    }
    if (ctx->pc != 0x271144u) { return; }
    ctx->pc = 0x271144u;
    // 0x271144: 0xc09c4ca
    ctx->pc = 0x271144u;
    SET_GPR_U32(ctx, 31, 0x27114Cu);
    ctx->pc = 0x271148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x271328u;
    {
        const uint32_t __entryPc = ctx->pc;
        someone_will_be_off_screen_0x271328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27114Cu; }
    }
    if (ctx->pc != 0x27114Cu) { return; }
    ctx->pc = 0x27114Cu;
    // 0x27114c: 0x10400003
    ctx->pc = 0x27114Cu;
    {
        const bool branch_taken_0x27114c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271150u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x27114c) {
            ctx->pc = 0x27115Cu;
            goto label_27115c;
        }
    }
    ctx->pc = 0x271154u;
    // 0x271154: 0xc09c148
    ctx->pc = 0x271154u;
    SET_GPR_U32(ctx, 31, 0x27115Cu);
    ctx->pc = 0x271158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27115Cu; }
    }
    if (ctx->pc != 0x27115Cu) { return; }
    ctx->pc = 0x27115Cu;
label_27115c:
    // 0x27115c: 0xc7a00000
    ctx->pc = 0x27115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271160: 0xe6000050
    ctx->pc = 0x271160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x271164: 0xc7a00004
    ctx->pc = 0x271164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271168: 0xe6000054
    ctx->pc = 0x271168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x27116c: 0xc7a00008
    ctx->pc = 0x27116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271170: 0xe6000058
    ctx->pc = 0x271170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x271174: 0x26040020
    ctx->pc = 0x271174u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x271178: 0xc080ca2
    ctx->pc = 0x271178u;
    SET_GPR_U32(ctx, 31, 0x271180u);
    ctx->pc = 0x27117Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2064));
    ctx->pc = 0x203288u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjAttnOffset_0x203288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271180u; }
    }
    if (ctx->pc != 0x271180u) { return; }
    ctx->pc = 0x271180u;
    // 0x271180: 0x24020006
    ctx->pc = 0x271180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_271184:
    // 0x271184: 0xdfbf00b0
    ctx->pc = 0x271184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x271188: 0xdfb500a0
    ctx->pc = 0x271188u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27118c: 0xdfb40090
    ctx->pc = 0x27118cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x271190: 0xdfb30080
    ctx->pc = 0x271190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x271194: 0xdfb20070
    ctx->pc = 0x271194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271198: 0xdfb10060
    ctx->pc = 0x271198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27119c: 0xdfb00050
    ctx->pc = 0x27119cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2711a0: 0xc7b800e0
    ctx->pc = 0x2711a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2711a4: 0xc7b700d8
    ctx->pc = 0x2711a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2711a8: 0xc7b600d0
    ctx->pc = 0x2711a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2711ac: 0xc7b500c8
    ctx->pc = 0x2711acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2711b0: 0xc7b400c0
    ctx->pc = 0x2711b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2711b4: 0x3e00008
    ctx->pc = 0x2711B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2711B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270608u: goto label_270608;
            case 0x270670u: goto label_270670;
            case 0x270688u: goto label_270688;
            case 0x270750u: goto label_270750;
            case 0x270754u: goto label_270754;
            case 0x270828u: goto label_270828;
            case 0x27082Cu: goto label_27082c;
            case 0x270858u: goto label_270858;
            case 0x270868u: goto label_270868;
            case 0x270950u: goto label_270950;
            case 0x270980u: goto label_270980;
            case 0x270988u: goto label_270988;
            case 0x270990u: goto label_270990;
            case 0x270994u: goto label_270994;
            case 0x270A74u: goto label_270a74;
            case 0x270AA4u: goto label_270aa4;
            case 0x270AACu: goto label_270aac;
            case 0x270AB4u: goto label_270ab4;
            case 0x270AB8u: goto label_270ab8;
            case 0x270BA8u: goto label_270ba8;
            case 0x270BD8u: goto label_270bd8;
            case 0x270BE0u: goto label_270be0;
            case 0x270BE8u: goto label_270be8;
            case 0x270C80u: goto label_270c80;
            case 0x270D84u: goto label_270d84;
            case 0x270DD4u: goto label_270dd4;
            case 0x270DECu: goto label_270dec;
            case 0x270E68u: goto label_270e68;
            case 0x270ED4u: goto label_270ed4;
            case 0x270ED8u: goto label_270ed8;
            case 0x270F3Cu: goto label_270f3c;
            case 0x270F40u: goto label_270f40;
            case 0x270F48u: goto label_270f48;
            case 0x270F4Cu: goto label_270f4c;
            case 0x270FD8u: goto label_270fd8;
            case 0x270FDCu: goto label_270fdc;
            case 0x270FE4u: goto label_270fe4;
            case 0x270FF8u: goto label_270ff8;
            case 0x271008u: goto label_271008;
            case 0x271014u: goto label_271014;
            case 0x271044u: goto label_271044;
            case 0x271060u: goto label_271060;
            case 0x2710C0u: goto label_2710c0;
            case 0x2710D8u: goto label_2710d8;
            case 0x2710F4u: goto label_2710f4;
            case 0x2710FCu: goto label_2710fc;
            case 0x27115Cu: goto label_27115c;
            case 0x271184u: goto label_271184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2711BCu;
}
