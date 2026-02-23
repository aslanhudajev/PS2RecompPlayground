#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispLifePtclLoop__10PlayerTaskFv
// Address: 0x212490 - 0x212570
void dispLifePtclLoop__10PlayerTaskFv_0x212490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispLifePtclLoop__10PlayerTaskFv");


    ctx->pc = 0x212490u;

    // 0x212490: 0x27bdffe0
    ctx->pc = 0x212490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212494: 0x7fbf0010
    ctx->pc = 0x212494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x212498: 0x7fb00000
    ctx->pc = 0x212498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21249c: 0x24901cc4
    ctx->pc = 0x21249cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 7364));
    // 0x2124a0: 0x3c020050
    ctx->pc = 0x2124a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2124a4: 0xc07ce18
    ctx->pc = 0x2124A4u;
    SET_GPR_U32(ctx, 31, 0x2124ACu);
    ctx->pc = 0x2124A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2124ACu; }
        else if (ctx->pc != 0x2124ACu) { ctx->pc = 0x2124ACu; }
    }
    if (ctx->pc != 0x2124ACu) { return; }
    ctx->pc = 0x2124ACu;
    // 0x2124ac: 0x1c40002c
    ctx->pc = 0x2124ACu;
    {
        const bool branch_taken_0x2124ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2124B0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2124ac) {
            ctx->pc = 0x212560u;
            goto label_212560;
        }
    }
    ctx->pc = 0x2124B4u;
    // 0x2124b4: 0x44800000
    ctx->pc = 0x2124b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2124b8:
    // 0x2124b8: 0x8e030018
    ctx->pc = 0x2124b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2124bc: 0x50600025
    ctx->pc = 0x2124BCu;
    {
        const bool branch_taken_0x2124bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2124bc) {
            ctx->pc = 0x2124C0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x212554u;
            goto label_212554;
        }
    }
    ctx->pc = 0x2124C4u;
    // 0x2124c4: 0xc602000c
    ctx->pc = 0x2124c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2124c8: 0xc6010000
    ctx->pc = 0x2124c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2124cc: 0x46020840
    ctx->pc = 0x2124ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2124d0: 0xe6010000
    ctx->pc = 0x2124d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2124d4: 0xc6020010
    ctx->pc = 0x2124d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2124d8: 0xc6010004
    ctx->pc = 0x2124d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2124dc: 0x46020840
    ctx->pc = 0x2124dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2124e0: 0xe6010004
    ctx->pc = 0x2124e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2124e4: 0x8e040020
    ctx->pc = 0x2124e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2124e8: 0x8e03002c
    ctx->pc = 0x2124e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2124ec: 0x831821
    ctx->pc = 0x2124ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2124f0: 0xae030020
    ctx->pc = 0x2124f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2124f4: 0x8e040028
    ctx->pc = 0x2124f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2124f8: 0x8e030034
    ctx->pc = 0x2124f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2124fc: 0x831821
    ctx->pc = 0x2124fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x212500: 0xae030028
    ctx->pc = 0x212500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x212504: 0xc602003c
    ctx->pc = 0x212504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212508: 0xc6010038
    ctx->pc = 0x212508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21250c: 0x46020840
    ctx->pc = 0x21250cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x212510: 0xe6010038
    ctx->pc = 0x212510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x212514: 0x8e03001c
    ctx->pc = 0x212514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x212518: 0x24630001
    ctx->pc = 0x212518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21251c: 0xae03001c
    ctx->pc = 0x21251cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x212520: 0x8e03001c
    ctx->pc = 0x212520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x212524: 0x28610051
    ctx->pc = 0x212524u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 81));
    // 0x212528: 0x14200003
    ctx->pc = 0x212528u;
    {
        const bool branch_taken_0x212528 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x212528) {
            ctx->pc = 0x212538u;
            goto label_212538;
        }
    }
    ctx->pc = 0x212530u;
    // 0x212530: 0xae000018
    ctx->pc = 0x212530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x212534: 0x0
    ctx->pc = 0x212534u;
    // NOP
label_212538:
    // 0x212538: 0xc6010038
    ctx->pc = 0x212538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21253c: 0x46000836
    ctx->pc = 0x21253cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212540: 0x0
    ctx->pc = 0x212540u;
    // NOP
    // 0x212544: 0x45000002
    ctx->pc = 0x212544u;
    {
        const bool branch_taken_0x212544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212544) {
            ctx->pc = 0x212550u;
            goto label_212550;
        }
    }
    ctx->pc = 0x21254Cu;
    // 0x21254c: 0xae000018
    ctx->pc = 0x21254cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_212550:
    // 0x212550: 0x24a50001
    ctx->pc = 0x212550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_212554:
    // 0x212554: 0x28a30020
    ctx->pc = 0x212554u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 32));
    // 0x212558: 0x1460ffd7
    ctx->pc = 0x212558u;
    {
        const bool branch_taken_0x212558 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21255Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x212558) {
            ctx->pc = 0x2124B8u;
            goto label_2124b8;
        }
    }
    ctx->pc = 0x212560u;
label_212560:
    // 0x212560: 0x7bbf0010
    ctx->pc = 0x212560u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212564: 0x7bb00000
    ctx->pc = 0x212564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212568: 0x3e00008
    ctx->pc = 0x212568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21256Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2124B8u: goto label_2124b8;
            case 0x212538u: goto label_212538;
            case 0x212550u: goto label_212550;
            case 0x212554u: goto label_212554;
            case 0x212560u: goto label_212560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212570u;
}
