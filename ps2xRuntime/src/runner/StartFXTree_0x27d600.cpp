#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFXTree
// Address: 0x27d600 - 0x27d7e4
void StartFXTree_0x27d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27d600u;

    // 0x27d600: 0x27bdff80
    ctx->pc = 0x27d600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27d604: 0xffbf0060
    ctx->pc = 0x27d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27d608: 0xffb50050
    ctx->pc = 0x27d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27d60c: 0xffb40040
    ctx->pc = 0x27d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27d610: 0xffb30030
    ctx->pc = 0x27d610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d614: 0xffb20020
    ctx->pc = 0x27d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d618: 0xffb10010
    ctx->pc = 0x27d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d61c: 0xffb00000
    ctx->pc = 0x27d61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d620: 0xe7b40070
    ctx->pc = 0x27d620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27d624: 0x80902d
    ctx->pc = 0x27d624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d628: 0xa0982d
    ctx->pc = 0x27d628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d62c: 0x46006506
    ctx->pc = 0x27d62cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27d630: 0xc0a02d
    ctx->pc = 0x27d630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d634: 0x12400025
    ctx->pc = 0x27D634u;
    {
        const bool branch_taken_0x27d634 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D638u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27d634) {
            ctx->pc = 0x27D6CCu;
            goto label_27d6cc;
        }
    }
    ctx->pc = 0x27D63Cu;
    // 0x27d63c: 0xc09ead8
    ctx->pc = 0x27D63Cu;
    SET_GPR_U32(ctx, 31, 0x27D644u);
    ctx->pc = 0x27AB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindEffectIdx_0x27ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D644u; }
    }
    if (ctx->pc != 0x27D644u) { return; }
    ctx->pc = 0x27D644u;
    // 0x27d644: 0x40a82d
    ctx->pc = 0x27d644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d648: 0x240300f0
    ctx->pc = 0x27d648u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27d64c: 0x2a31818
    ctx->pc = 0x27d64cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27d650: 0x3c020034
    ctx->pc = 0x27d650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27d654: 0x24420eb0
    ctx->pc = 0x27d654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27d658: 0x628021
    ctx->pc = 0x27d658u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d65c: 0x240202d
    ctx->pc = 0x27d65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d660: 0x26050018
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 24));
    // 0x27d664: 0x302d
    ctx->pc = 0x27d664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d668: 0x220382d
    ctx->pc = 0x27d668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d66c: 0xc0846a4
    ctx->pc = 0x27D66Cu;
    SET_GPR_U32(ctx, 31, 0x27D674u);
    ctx->pc = 0x27D670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitSub_0x211a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D674u; }
    }
    if (ctx->pc != 0x27D674u) { return; }
    ctx->pc = 0x27D674u;
    // 0x27d674: 0x10400015
    ctx->pc = 0x27D674u;
    {
        const bool branch_taken_0x27d674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D678u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x27d674) {
            ctx->pc = 0x27D6CCu;
            goto label_27d6cc;
        }
    }
    ctx->pc = 0x27D67Cu;
    // 0x27d67c: 0x32222000
    ctx->pc = 0x27d67cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 8192));
    // 0x27d680: 0x10400003
    ctx->pc = 0x27D680u;
    {
        const bool branch_taken_0x27d680 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D684u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x27d680) {
            ctx->pc = 0x27D690u;
            goto label_27d690;
        }
    }
    ctx->pc = 0x27D688u;
    // 0x27d688: 0x10000008
    ctx->pc = 0x27D688u;
    {
        const bool branch_taken_0x27d688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D68Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953372)));
        if (branch_taken_0x27d688) {
            ctx->pc = 0x27D6ACu;
            goto label_27d6ac;
        }
    }
    ctx->pc = 0x27D690u;
label_27d690:
    // 0x27d690: 0x32220800
    ctx->pc = 0x27d690u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 2048));
    // 0x27d694: 0x10400003
    ctx->pc = 0x27D694u;
    {
        const bool branch_taken_0x27d694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D698u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27d694) {
            ctx->pc = 0x27D6A4u;
            goto label_27d6a4;
        }
    }
    ctx->pc = 0x27D69Cu;
    // 0x27d69c: 0x10000003
    ctx->pc = 0x27D69Cu;
    {
        const bool branch_taken_0x27d69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D6A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 22172)));
        if (branch_taken_0x27d69c) {
            ctx->pc = 0x27D6ACu;
            goto label_27d6ac;
        }
    }
    ctx->pc = 0x27D6A4u;
label_27d6a4:
    // 0x27d6a4: 0x3c020038
    ctx->pc = 0x27d6a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x27d6a8: 0x8c44c9a0
    ctx->pc = 0x27d6a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
label_27d6ac:
    // 0x27d6ac: 0x3c05003a
    ctx->pc = 0x27d6acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x27d6b0: 0x24a52550
    ctx->pc = 0x27d6b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x27d6b4: 0xc0b3ec0
    ctx->pc = 0x27D6B4u;
    SET_GPR_U32(ctx, 31, 0x27D6BCu);
    ctx->pc = 0x27D6B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6BCu; }
    }
    if (ctx->pc != 0x27D6BCu) { return; }
    ctx->pc = 0x27D6BCu;
    // 0x27d6bc: 0x14400005
    ctx->pc = 0x27D6BCu;
    {
        const bool branch_taken_0x27d6bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27D6C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x27d6bc) {
            ctx->pc = 0x27D6D4u;
            goto label_27d6d4;
        }
    }
    ctx->pc = 0x27D6C4u;
    // 0x27d6c4: 0xc08496c
    ctx->pc = 0x27D6C4u;
    SET_GPR_U32(ctx, 31, 0x27D6CCu);
    ctx->pc = 0x27D6C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6CCu; }
    }
    if (ctx->pc != 0x27D6CCu) { return; }
    ctx->pc = 0x27D6CCu;
label_27d6cc:
    // 0x27d6cc: 0x1000003b
    ctx->pc = 0x27D6CCu;
    {
        const bool branch_taken_0x27d6cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D6D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27d6cc) {
            ctx->pc = 0x27D7BCu;
            goto label_27d7bc;
        }
    }
    ctx->pc = 0x27D6D4u;
label_27d6d4:
    // 0x27d6d4: 0x8e020018
    ctx->pc = 0x27d6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27d6d8: 0x8c440000
    ctx->pc = 0x27d6d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d6dc: 0xc0b3f94
    ctx->pc = 0x27D6DCu;
    SET_GPR_U32(ctx, 31, 0x27D6E4u);
    ctx->pc = 0x27D6E0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6E4u; }
    }
    if (ctx->pc != 0x27D6E4u) { return; }
    ctx->pc = 0x27D6E4u;
    // 0x27d6e4: 0x44800000
    ctx->pc = 0x27d6e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27d6e8: 0x46140034
    ctx->pc = 0x27d6e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d6ec: 0x0
    ctx->pc = 0x27d6ecu;
    // NOP
    // 0x27d6f0: 0x45000008
    ctx->pc = 0x27D6F0u;
    {
        const bool branch_taken_0x27d6f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D6F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 28));
        if (branch_taken_0x27d6f0) {
            ctx->pc = 0x27D714u;
            goto label_27d714;
        }
    }
    ctx->pc = 0x27D6F8u;
    // 0x27d6f8: 0x3c020031
    ctx->pc = 0x27d6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27d6fc: 0xc440ffb4
    ctx->pc = 0x27d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d700: 0x4600a000
    ctx->pc = 0x27d700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x27d704: 0xe6000068
    ctx->pc = 0x27d704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x27d708: 0x24020001
    ctx->pc = 0x27d708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d70c: 0x10000016
    ctx->pc = 0x27D70Cu;
    {
        const bool branch_taken_0x27d70c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D710u;
        WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x27d70c) {
            ctx->pc = 0x27D768u;
            goto label_27d768;
        }
    }
    ctx->pc = 0x27D714u;
label_27d714:
    // 0x27d714: 0x8ca20000
    ctx->pc = 0x27d714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27d718: 0x84440020
    ctx->pc = 0x27d718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27d71c: 0x14800004
    ctx->pc = 0x27D71Cu;
    {
        const bool branch_taken_0x27d71c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x27D720u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x27d71c) {
            ctx->pc = 0x27D730u;
            goto label_27d730;
        }
    }
    ctx->pc = 0x27D724u;
    // 0x27d724: 0x2404001e
    ctx->pc = 0x27d724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x27d728: 0x24020001
    ctx->pc = 0x27d728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d72c: 0xa4a20034
    ctx->pc = 0x27d72cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 2));
label_27d730:
    // 0x27d730: 0x44840000
    ctx->pc = 0x27d730u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x27d734: 0x46800020
    ctx->pc = 0x27d734u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x27d738: 0x8ca20000
    ctx->pc = 0x27d738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27d73c: 0x84420022
    ctx->pc = 0x27d73cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x27d740: 0x44820800
    ctx->pc = 0x27d740u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x27d744: 0x46800860
    ctx->pc = 0x27d744u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x27d748: 0x46010002
    ctx->pc = 0x27d748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27d74c: 0x3c013a91
    ctx->pc = 0x27d74cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14993 << 16));
    // 0x27d750: 0x3421a2aa
    ctx->pc = 0x27d750u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 41642));
    // 0x27d754: 0x44810800
    ctx->pc = 0x27d754u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27d758: 0x46010002
    ctx->pc = 0x27d758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27d75c: 0xc461ffb4
    ctx->pc = 0x27d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d760: 0x46010000
    ctx->pc = 0x27d760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d764: 0xe6000068
    ctx->pc = 0x27d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_27d768:
    // 0x27d768: 0x3c022000
    ctx->pc = 0x27d768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x27d76c: 0x2821024
    ctx->pc = 0x27d76cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x27d770: 0x54400001
    ctx->pc = 0x27D770u;
    {
        const bool branch_taken_0x27d770 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27d770) {
            ctx->pc = 0x27D774u;
            WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x27D778u;
            goto label_27d778;
        }
    }
    ctx->pc = 0x27D778u;
label_27d778:
    // 0x27d778: 0x3c020031
    ctx->pc = 0x27d778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27d77c: 0xc6000068
    ctx->pc = 0x27d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d780: 0xc441ffb4
    ctx->pc = 0x27d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d784: 0x46010001
    ctx->pc = 0x27d784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d788: 0xe600006c
    ctx->pc = 0x27d788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x27d78c: 0x1260000a
    ctx->pc = 0x27D78Cu;
    {
        const bool branch_taken_0x27d78c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D790u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 20));
        if (branch_taken_0x27d78c) {
            ctx->pc = 0x27D7B8u;
            goto label_27d7b8;
        }
    }
    ctx->pc = 0x27D794u;
    // 0x27d794: 0x8e020014
    ctx->pc = 0x27d794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d798: 0xc6600000
    ctx->pc = 0x27d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d79c: 0xe4400030
    ctx->pc = 0x27d79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x27d7a0: 0x8e020014
    ctx->pc = 0x27d7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d7a4: 0xc6600004
    ctx->pc = 0x27d7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d7a8: 0xe4400034
    ctx->pc = 0x27d7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x27d7ac: 0x8e020014
    ctx->pc = 0x27d7acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d7b0: 0xc6600008
    ctx->pc = 0x27d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d7b4: 0xe4400038
    ctx->pc = 0x27d7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_27d7b8:
    // 0x27d7b8: 0x2a0102d
    ctx->pc = 0x27d7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27d7bc:
    // 0x27d7bc: 0xdfbf0060
    ctx->pc = 0x27d7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d7c0: 0xdfb50050
    ctx->pc = 0x27d7c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27d7c4: 0xdfb40040
    ctx->pc = 0x27d7c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d7c8: 0xdfb30030
    ctx->pc = 0x27d7c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d7cc: 0xdfb20020
    ctx->pc = 0x27d7ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d7d0: 0xdfb10010
    ctx->pc = 0x27d7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d7d4: 0xdfb00000
    ctx->pc = 0x27d7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d7d8: 0xc7b40070
    ctx->pc = 0x27d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d7dc: 0x3e00008
    ctx->pc = 0x27D7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D7E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D690u: goto label_27d690;
            case 0x27D6A4u: goto label_27d6a4;
            case 0x27D6ACu: goto label_27d6ac;
            case 0x27D6CCu: goto label_27d6cc;
            case 0x27D6D4u: goto label_27d6d4;
            case 0x27D714u: goto label_27d714;
            case 0x27D730u: goto label_27d730;
            case 0x27D768u: goto label_27d768;
            case 0x27D778u: goto label_27d778;
            case 0x27D7B8u: goto label_27d7b8;
            case 0x27D7BCu: goto label_27d7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D7E4u;
}
