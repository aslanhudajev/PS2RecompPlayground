#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLineNodeColSub
// Address: 0x29a5c8 - 0x29a76c
void CritterLineNodeColSub_0x29a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a5c8u;

    // 0x29a5c8: 0x27bdff50
    ctx->pc = 0x29a5c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29a5cc: 0xffbf0080
    ctx->pc = 0x29a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29a5d0: 0xffb70070
    ctx->pc = 0x29a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x29a5d4: 0xffb60060
    ctx->pc = 0x29a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29a5d8: 0xffb50050
    ctx->pc = 0x29a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29a5dc: 0xffb40040
    ctx->pc = 0x29a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29a5e0: 0xffb30030
    ctx->pc = 0x29a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a5e4: 0xffb20020
    ctx->pc = 0x29a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a5e8: 0xffb10010
    ctx->pc = 0x29a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a5ec: 0xffb00000
    ctx->pc = 0x29a5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a5f0: 0xe7b600a0
    ctx->pc = 0x29a5f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29a5f4: 0xe7b50098
    ctx->pc = 0x29a5f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x29a5f8: 0xe7b40090
    ctx->pc = 0x29a5f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29a5fc: 0x80902d
    ctx->pc = 0x29a5fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a600: 0xa0a82d
    ctx->pc = 0x29a600u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a604: 0xc0882d
    ctx->pc = 0x29a604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a608: 0xe0a02d
    ctx->pc = 0x29a608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a60c: 0x46006586
    ctx->pc = 0x29a60cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x29a610: 0x46006d46
    ctx->pc = 0x29a610u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x29a614: 0x46007506
    ctx->pc = 0x29a614u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x29a618: 0x100982d
    ctx->pc = 0x29a618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a61c: 0x8e420004
    ctx->pc = 0x29a61cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29a620: 0x84420118
    ctx->pc = 0x29a620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29a624: 0x18400040
    ctx->pc = 0x29A624u;
    {
        const bool branch_taken_0x29a624 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29A628u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a624) {
            ctx->pc = 0x29A728u;
            goto label_29a728;
        }
    }
    ctx->pc = 0x29A62Cu;
    // 0x29a62c: 0x24170060
    ctx->pc = 0x29a62cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 96));
    // 0x29a630: 0x24160002
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a634: 0x2171018
    ctx->pc = 0x29a634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29a638:
    // 0x29a638: 0x24420540
    ctx->pc = 0x29a638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x29a63c: 0x2422021
    ctx->pc = 0x29a63cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29a640: 0x8c820004
    ctx->pc = 0x29a640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29a644: 0x50400033
    ctx->pc = 0x29A644u;
    {
        const bool branch_taken_0x29a644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29a644) {
            ctx->pc = 0x29A648u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A714u;
            goto label_29a714;
        }
    }
    ctx->pc = 0x29A64Cu;
    // 0x29a64c: 0xc481005c
    ctx->pc = 0x29a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a650: 0xc4800058
    ctx->pc = 0x29a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a654: 0x46010036
    ctx->pc = 0x29a654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a658: 0x0
    ctx->pc = 0x29a658u;
    // NOP
    // 0x29a65c: 0x4503002d
    ctx->pc = 0x29A65Cu;
    {
        const bool branch_taken_0x29a65c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a65c) {
            ctx->pc = 0x29A660u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A714u;
            goto label_29a714;
        }
    }
    ctx->pc = 0x29A664u;
    // 0x29a664: 0x16760006
    ctx->pc = 0x29A664u;
    {
        const bool branch_taken_0x29a664 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 22));
        ctx->pc = 0x29A668u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x29a664) {
            ctx->pc = 0x29A680u;
            goto label_29a680;
        }
    }
    ctx->pc = 0x29A66Cu;
    // 0x29a66c: 0x94420010
    ctx->pc = 0x29a66cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29a670: 0x30420008
    ctx->pc = 0x29a670u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x29a674: 0x50400027
    ctx->pc = 0x29A674u;
    {
        const bool branch_taken_0x29a674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29a674) {
            ctx->pc = 0x29A678u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A714u;
            goto label_29a714;
        }
    }
    ctx->pc = 0x29A67Cu;
    // 0x29a67c: 0x8c820000
    ctx->pc = 0x29a67cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29a680:
    // 0x29a680: 0xc440002c
    ctx->pc = 0x29a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a684: 0x4600b340
    ctx->pc = 0x29a684u;
    ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x29a688: 0xc4820040
    ctx->pc = 0x29a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a68c: 0xc6200000
    ctx->pc = 0x29a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a690: 0x46001081
    ctx->pc = 0x29a690u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29a694: 0xc4800048
    ctx->pc = 0x29a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a698: 0xc6210008
    ctx->pc = 0x29a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a69c: 0x46010001
    ctx->pc = 0x29a69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a6a0: 0x46021082
    ctx->pc = 0x29a6a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x29a6a4: 0x46000002
    ctx->pc = 0x29a6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x29a6a8: 0x46001080
    ctx->pc = 0x29a6a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a6ac: 0x460d6802
    ctx->pc = 0x29a6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x29a6b0: 0x46150000
    ctx->pc = 0x29a6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x29a6b4: 0x46020034
    ctx->pc = 0x29a6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a6b8: 0x0
    ctx->pc = 0x29a6b8u;
    // NOP
    // 0x29a6bc: 0x45030015
    ctx->pc = 0x29A6BCu;
    {
        const bool branch_taken_0x29a6bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a6bc) {
            ctx->pc = 0x29A6C0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A714u;
            goto label_29a714;
        }
    }
    ctx->pc = 0x29A6C4u;
    // 0x29a6c4: 0xc4800044
    ctx->pc = 0x29a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a6c8: 0xc6210004
    ctx->pc = 0x29a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a6cc: 0x46010001
    ctx->pc = 0x29a6ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a6d0: 0x46146840
    ctx->pc = 0x29a6d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
    // 0x29a6d4: 0x46000834
    ctx->pc = 0x29a6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a6d8: 0x0
    ctx->pc = 0x29a6d8u;
    // NOP
    // 0x29a6dc: 0x4503000d
    ctx->pc = 0x29A6DCu;
    {
        const bool branch_taken_0x29a6dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a6dc) {
            ctx->pc = 0x29A6E0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A714u;
            goto label_29a714;
        }
    }
    ctx->pc = 0x29A6E4u;
    // 0x29a6e4: 0x24840040
    ctx->pc = 0x29a6e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x29a6e8: 0x2a0282d
    ctx->pc = 0x29a6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6ec: 0x220302d
    ctx->pc = 0x29a6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6f0: 0x280382d
    ctx->pc = 0x29a6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a6f4: 0x46006b06
    ctx->pc = 0x29a6f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x29a6f8: 0xc0a4202
    ctx->pc = 0x29A6F8u;
    SET_GPR_U32(ctx, 31, 0x29A700u);
    ctx->pc = 0x29A6FCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A700u; }
    }
    if (ctx->pc != 0x29A700u) { return; }
    ctx->pc = 0x29A700u;
    // 0x29a700: 0x10400003
    ctx->pc = 0x29A700u;
    {
        const bool branch_taken_0x29a700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A704u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29a700) {
            ctx->pc = 0x29A710u;
            goto label_29a710;
        }
    }
    ctx->pc = 0x29A708u;
    // 0x29a708: 0x1000000a
    ctx->pc = 0x29A708u;
    {
        const bool branch_taken_0x29a708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A70Cu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 2880), (uint16_t)GPR_U32(ctx, 16));
        if (branch_taken_0x29a708) {
            ctx->pc = 0x29A734u;
            goto label_29a734;
        }
    }
    ctx->pc = 0x29A710u;
label_29a710:
    // 0x29a710: 0x26100001
    ctx->pc = 0x29a710u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29a714:
    // 0x29a714: 0x8e420004
    ctx->pc = 0x29a714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29a718: 0x84420118
    ctx->pc = 0x29a718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29a71c: 0x202102a
    ctx->pc = 0x29a71cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x29a720: 0x1440ffc5
    ctx->pc = 0x29A720u;
    {
        const bool branch_taken_0x29a720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A724u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29a720) {
            ctx->pc = 0x29A638u;
            goto label_29a638;
        }
    }
    ctx->pc = 0x29A728u;
label_29a728:
    // 0x29a728: 0x2402ffff
    ctx->pc = 0x29a728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a72c: 0xa6420b40
    ctx->pc = 0x29a72cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2880), (uint16_t)GPR_U32(ctx, 2));
    // 0x29a730: 0x102d
    ctx->pc = 0x29a730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a734:
    // 0x29a734: 0xdfbf0080
    ctx->pc = 0x29a734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29a738: 0xdfb70070
    ctx->pc = 0x29a738u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a73c: 0xdfb60060
    ctx->pc = 0x29a73cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a740: 0xdfb50050
    ctx->pc = 0x29a740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a744: 0xdfb40040
    ctx->pc = 0x29a744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a748: 0xdfb30030
    ctx->pc = 0x29a748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a74c: 0xdfb20020
    ctx->pc = 0x29a74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a750: 0xdfb10010
    ctx->pc = 0x29a750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a754: 0xdfb00000
    ctx->pc = 0x29a754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a758: 0xc7b600a0
    ctx->pc = 0x29a758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29a75c: 0xc7b50098
    ctx->pc = 0x29a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a760: 0xc7b40090
    ctx->pc = 0x29a760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a764: 0x3e00008
    ctx->pc = 0x29A764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A638u: goto label_29a638;
            case 0x29A680u: goto label_29a680;
            case 0x29A710u: goto label_29a710;
            case 0x29A714u: goto label_29a714;
            case 0x29A728u: goto label_29a728;
            case 0x29A734u: goto label_29a734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A76Cu;
}
