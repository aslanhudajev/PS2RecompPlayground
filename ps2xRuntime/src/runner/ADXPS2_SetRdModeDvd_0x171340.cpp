#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_SetRdModeDvd
// Address: 0x171340 - 0x1713a4
void ADXPS2_SetRdModeDvd_0x171340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_SetRdModeDvd");


    ctx->pc = 0x171340u;

    // 0x171340: 0x27bdffe0
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171344: 0xffb00000
    ctx->pc = 0x171344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171348: 0x80802d
    ctx->pc = 0x171348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17134c: 0x1200000b
    ctx->pc = 0x17134Cu;
    {
        const bool branch_taken_0x17134c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x171350u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x17134c) {
            ctx->pc = 0x17137Cu;
            goto label_17137c;
        }
    }
    ctx->pc = 0x171354u;
    // 0x171354: 0x8e040008
    ctx->pc = 0x171354u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171358: 0x8e05000c
    ctx->pc = 0x171358u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17135c: 0x8e060010
    ctx->pc = 0x17135cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x171360: 0xc05e174
    ctx->pc = 0x171360u;
    SET_GPR_U32(ctx, 31, 0x171368u);
    ctx->pc = 0x171364u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1785D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiSetRdMode_0x1785d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171368u; }
        else if (ctx->pc != 0x171368u) { ctx->pc = 0x171368u; }
    }
    if (ctx->pc != 0x171368u) { return; }
    ctx->pc = 0x171368u;
    // 0x171368: 0x8e040000
    ctx->pc = 0x171368u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17136c: 0xdfbf0010
    ctx->pc = 0x17136cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171370: 0xdfb00000
    ctx->pc = 0x171370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171374: 0x805e17c
    ctx->pc = 0x171374u;
    ctx->pc = 0x171378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1785F0u;
    dvCiSetRootDir_0x1785f0(rdram, ctx, runtime); return;
    ctx->pc = 0x17137Cu;
label_17137c:
    // 0x17137c: 0x202d
    ctx->pc = 0x17137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171380: 0x282d
    ctx->pc = 0x171380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171384: 0x302d
    ctx->pc = 0x171384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171388: 0xc05e174
    ctx->pc = 0x171388u;
    SET_GPR_U32(ctx, 31, 0x171390u);
    ctx->pc = 0x17138Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1785D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiSetRdMode_0x1785d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171390u; }
        else if (ctx->pc != 0x171390u) { ctx->pc = 0x171390u; }
    }
    if (ctx->pc != 0x171390u) { return; }
    ctx->pc = 0x171390u;
    // 0x171390: 0xdfbf0010
    ctx->pc = 0x171390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171394: 0x202d
    ctx->pc = 0x171394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171398: 0xdfb00000
    ctx->pc = 0x171398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17139c: 0x805e17c
    ctx->pc = 0x17139Cu;
    ctx->pc = 0x1713A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1785F0u;
    dvCiSetRootDir_0x1785f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1713A4u;
}
