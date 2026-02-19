#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: disp_piece
// Address: 0x229420 - 0x229514
void disp_piece_0x229420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229420u;

    // 0x229420: 0x27bdff90
    ctx->pc = 0x229420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x229424: 0xffbf0060
    ctx->pc = 0x229424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x229428: 0xffb30050
    ctx->pc = 0x229428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x22942c: 0xffb20040
    ctx->pc = 0x22942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x229430: 0xffb10030
    ctx->pc = 0x229430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x229434: 0xffb00020
    ctx->pc = 0x229434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x229438: 0x80882d
    ctx->pc = 0x229438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22943c: 0xa0982d
    ctx->pc = 0x22943cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229440: 0x8e220000
    ctx->pc = 0x229440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x229444: 0x14400003
    ctx->pc = 0x229444u;
    {
        const bool branch_taken_0x229444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229448u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229444) {
            ctx->pc = 0x229454u;
            goto label_229454;
        }
    }
    ctx->pc = 0x22944Cu;
    // 0x22944c: 0x1000002a
    ctx->pc = 0x22944Cu;
    {
        const bool branch_taken_0x22944c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229450u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22944c) {
            ctx->pc = 0x2294F8u;
            goto label_2294f8;
        }
    }
    ctx->pc = 0x229454u;
label_229454:
    // 0x229454: 0x10e00007
    ctx->pc = 0x229454u;
    {
        const bool branch_taken_0x229454 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x229458u;
        SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
        if (branch_taken_0x229454) {
            ctx->pc = 0x229474u;
            goto label_229474;
        }
    }
    ctx->pc = 0x22945Cu;
    // 0x22945c: 0x3a0202d
    ctx->pc = 0x22945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229460: 0x24a56ff0
    ctx->pc = 0x229460u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28656));
    // 0x229464: 0xc0b6252
    ctx->pc = 0x229464u;
    SET_GPR_U32(ctx, 31, 0x22946Cu);
    ctx->pc = 0x229468u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22946Cu; }
    }
    if (ctx->pc != 0x22946Cu) { return; }
    ctx->pc = 0x22946Cu;
    // 0x22946c: 0x10000005
    ctx->pc = 0x22946Cu;
    {
        const bool branch_taken_0x22946c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229470u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22946c) {
            ctx->pc = 0x229484u;
            goto label_229484;
        }
    }
    ctx->pc = 0x229474u;
label_229474:
    // 0x229474: 0x3a0202d
    ctx->pc = 0x229474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229478: 0xc0bf2c1
    ctx->pc = 0x229478u;
    SET_GPR_U32(ctx, 31, 0x229480u);
    ctx->pc = 0x22947Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229480u; }
    }
    if (ctx->pc != 0x229480u) { return; }
    ctx->pc = 0x229480u;
    // 0x229480: 0x3a0202d
    ctx->pc = 0x229480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_229484:
    // 0x229484: 0x282d
    ctx->pc = 0x229484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229488: 0xc0b1ba8
    ctx->pc = 0x229488u;
    SET_GPR_U32(ctx, 31, 0x229490u);
    ctx->pc = 0x22948Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229490u; }
    }
    if (ctx->pc != 0x229490u) { return; }
    ctx->pc = 0x229490u;
    // 0x229490: 0x40802d
    ctx->pc = 0x229490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229494: 0x3a0202d
    ctx->pc = 0x229494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229498: 0x282d
    ctx->pc = 0x229498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22949c: 0xc0b0c08
    ctx->pc = 0x22949Cu;
    SET_GPR_U32(ctx, 31, 0x2294A4u);
    ctx->pc = 0x2294A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294A4u; }
    }
    if (ctx->pc != 0x2294A4u) { return; }
    ctx->pc = 0x2294A4u;
    // 0x2294a4: 0x40902d
    ctx->pc = 0x2294a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294a8: 0xc0b3da0
    ctx->pc = 0x2294A8u;
    SET_GPR_U32(ctx, 31, 0x2294B0u);
    ctx->pc = 0x2294ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294B0u; }
    }
    if (ctx->pc != 0x2294B0u) { return; }
    ctx->pc = 0x2294B0u;
    // 0x2294b0: 0x40802d
    ctx->pc = 0x2294b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294b4: 0x8e250004
    ctx->pc = 0x2294b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2294b8: 0x240202d
    ctx->pc = 0x2294b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294bc: 0x2652821
    ctx->pc = 0x2294bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2294c0: 0x3c014040
    ctx->pc = 0x2294c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2294c4: 0x44816000
    ctx->pc = 0x2294c4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2294c8: 0xc0b0df2
    ctx->pc = 0x2294C8u;
    SET_GPR_U32(ctx, 31, 0x2294D0u);
    ctx->pc = 0x2294CCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294D0u; }
    }
    if (ctx->pc != 0x2294D0u) { return; }
    ctx->pc = 0x2294D0u;
    // 0x2294d0: 0x12000008
    ctx->pc = 0x2294D0u;
    {
        const bool branch_taken_0x2294d0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2294D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2294d0) {
            ctx->pc = 0x2294F4u;
            goto label_2294f4;
        }
    }
    ctx->pc = 0x2294D8u;
    // 0x2294d8: 0x96050016
    ctx->pc = 0x2294d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2294dc: 0xc0b0cf6
    ctx->pc = 0x2294DCu;
    SET_GPR_U32(ctx, 31, 0x2294E4u);
    ctx->pc = 0x2294E0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2294E4u; }
    }
    if (ctx->pc != 0x2294E4u) { return; }
    ctx->pc = 0x2294E4u;
    // 0x2294e4: 0x96020016
    ctx->pc = 0x2294e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2294e8: 0xae22001c
    ctx->pc = 0x2294e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2294ec: 0x96020018
    ctx->pc = 0x2294ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2294f0: 0xae220020
    ctx->pc = 0x2294f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2294f4:
    // 0x2294f4: 0x240102d
    ctx->pc = 0x2294f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2294f8:
    // 0x2294f8: 0xdfbf0060
    ctx->pc = 0x2294f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2294fc: 0xdfb30050
    ctx->pc = 0x2294fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229500: 0xdfb20040
    ctx->pc = 0x229500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229504: 0xdfb10030
    ctx->pc = 0x229504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229508: 0xdfb00020
    ctx->pc = 0x229508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22950c: 0x3e00008
    ctx->pc = 0x22950Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229454u: goto label_229454;
            case 0x229474u: goto label_229474;
            case 0x229484u: goto label_229484;
            case 0x2294F4u: goto label_2294f4;
            case 0x2294F8u: goto label_2294f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229514u;
}
