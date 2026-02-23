#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Finish
// Address: 0x16a470 - 0x16a524
void ADXF_Finish_0x16a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Finish");


    ctx->pc = 0x16a470u;

    // 0x16a470: 0x3c030023
    ctx->pc = 0x16a470u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16a474: 0x27bdfff0
    ctx->pc = 0x16a474u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a478: 0x8c62b594
    ctx->pc = 0x16a478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294948244)));
    // 0x16a47c: 0xffbf0000
    ctx->pc = 0x16a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a480: 0x2442ffff
    ctx->pc = 0x16a480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16a484: 0x14400024
    ctx->pc = 0x16A484u;
    {
        const bool branch_taken_0x16a484 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a484) {
            ctx->pc = 0x16A518u;
            goto label_16a518;
        }
    }
    ctx->pc = 0x16A48Cu;
    // 0x16a48c: 0xc05ae38
    ctx->pc = 0x16A48Cu;
    SET_GPR_U32(ctx, 31, 0x16A494u);
    ctx->pc = 0x16B8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_CloseAll_0x16b8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A494u; }
        else if (ctx->pc != 0x16A494u) { ctx->pc = 0x16A494u; }
    }
    if (ctx->pc != 0x16A494u) { return; }
    ctx->pc = 0x16A494u;
    // 0x16a494: 0x3c050023
    ctx->pc = 0x16a494u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x16a498: 0x2402ffff
    ctx->pc = 0x16a498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a49c: 0x3c060023
    ctx->pc = 0x16a49cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x16a4a0: 0x3c030023
    ctx->pc = 0x16a4a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16a4a4: 0x3c070023
    ctx->pc = 0x16a4a4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x16a4a8: 0x3c080023
    ctx->pc = 0x16a4a8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x16a4ac: 0xaca2dd4c
    ctx->pc = 0x16a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294958412), GPR_U32(ctx, 2));
    // 0x16a4b0: 0x3c040023
    ctx->pc = 0x16a4b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a4b4: 0xacc0dd44
    ctx->pc = 0x16a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294958404), GPR_U32(ctx, 0));
    // 0x16a4b8: 0x2484dd20
    ctx->pc = 0x16a4b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958368));
    // 0x16a4bc: 0xac60dd48
    ctx->pc = 0x16a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958408), GPR_U32(ctx, 0));
    // 0x16a4c0: 0x282d
    ctx->pc = 0x16a4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4c4: 0xace0cd18
    ctx->pc = 0x16a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954264), GPR_U32(ctx, 0));
    // 0x16a4c8: 0x24060020
    ctx->pc = 0x16a4c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x16a4cc: 0xc050cfe
    ctx->pc = 0x16A4CCu;
    SET_GPR_U32(ctx, 31, 0x16A4D4u);
    ctx->pc = 0x16A4D0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294958400), GPR_U32(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4D4u; }
        else if (ctx->pc != 0x16A4D4u) { ctx->pc = 0x16A4D4u; }
    }
    if (ctx->pc != 0x16A4D4u) { return; }
    ctx->pc = 0x16A4D4u;
    // 0x16a4d4: 0x3c040023
    ctx->pc = 0x16a4d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a4d8: 0x240500ff
    ctx->pc = 0x16a4d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x16a4dc: 0x2484cd20
    ctx->pc = 0x16a4dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954272));
    // 0x16a4e0: 0xc050cfe
    ctx->pc = 0x16A4E0u;
    SET_GPR_U32(ctx, 31, 0x16A4E8u);
    ctx->pc = 0x16A4E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4E8u; }
        else if (ctx->pc != 0x16A4E8u) { ctx->pc = 0x16A4E8u; }
    }
    if (ctx->pc != 0x16A4E8u) { return; }
    ctx->pc = 0x16A4E8u;
    // 0x16a4e8: 0x3c040023
    ctx->pc = 0x16a4e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a4ec: 0x282d
    ctx->pc = 0x16a4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4f0: 0x2484c918
    ctx->pc = 0x16a4f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953240));
    // 0x16a4f4: 0xc050cfe
    ctx->pc = 0x16A4F4u;
    SET_GPR_U32(ctx, 31, 0x16A4FCu);
    ctx->pc = 0x16A4F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4FCu; }
        else if (ctx->pc != 0x16A4FCu) { ctx->pc = 0x16A4FCu; }
    }
    if (ctx->pc != 0x16A4FCu) { return; }
    ctx->pc = 0x16A4FCu;
    // 0x16a4fc: 0x3c040023
    ctx->pc = 0x16a4fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a500: 0xdfbf0000
    ctx->pc = 0x16a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a504: 0x282d
    ctx->pc = 0x16a504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a508: 0x2484b598
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948248));
    // 0x16a50c: 0x24061380
    ctx->pc = 0x16a50cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4992));
    // 0x16a510: 0x8050cfe
    ctx->pc = 0x16A510u;
    ctx->pc = 0x16A514u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x16A518u;
label_16a518:
    // 0x16a518: 0xdfbf0000
    ctx->pc = 0x16a518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a51c: 0x3e00008
    ctx->pc = 0x16A51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A520u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A518u: goto label_16a518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A524u;
}
