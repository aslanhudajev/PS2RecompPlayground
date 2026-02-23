#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetByteRate
// Address: 0x19cda0 - 0x19ce08
void SFD_SetByteRate_0x19cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetByteRate");


    ctx->pc = 0x19cda0u;

    // 0x19cda0: 0x27bdffd0
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cda4: 0xffb00000
    ctx->pc = 0x19cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cda8: 0xffb10010
    ctx->pc = 0x19cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19cdac: 0x80802d
    ctx->pc = 0x19cdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cdb0: 0xffbf0020
    ctx->pc = 0x19cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19cdb4: 0xc064f1e
    ctx->pc = 0x19CDB4u;
    SET_GPR_U32(ctx, 31, 0x19CDBCu);
    ctx->pc = 0x19CDB8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDBCu; }
        else if (ctx->pc != 0x19CDBCu) { ctx->pc = 0x19CDBCu; }
    }
    if (ctx->pc != 0x19CDBCu) { return; }
    ctx->pc = 0x19CDBCu;
    // 0x19cdbc: 0x10400006
    ctx->pc = 0x19CDBCu;
    {
        const bool branch_taken_0x19cdbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CDC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cdbc) {
            ctx->pc = 0x19CDD8u;
            goto label_19cdd8;
        }
    }
    ctx->pc = 0x19CDC4u;
    // 0x19cdc4: 0x3c05ff00
    ctx->pc = 0x19cdc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19cdc8: 0xc064ea0
    ctx->pc = 0x19CDC8u;
    SET_GPR_U32(ctx, 31, 0x19CDD0u);
    ctx->pc = 0x19CDCCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 347));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDD0u; }
        else if (ctx->pc != 0x19CDD0u) { ctx->pc = 0x19CDD0u; }
    }
    if (ctx->pc != 0x19CDD0u) { return; }
    ctx->pc = 0x19CDD0u;
    // 0x19cdd0: 0x10000009
    ctx->pc = 0x19CDD0u;
    {
        const bool branch_taken_0x19cdd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CDD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19cdd0) {
            ctx->pc = 0x19CDF8u;
            goto label_19cdf8;
        }
    }
    ctx->pc = 0x19CDD8u;
label_19cdd8:
    // 0x19cdd8: 0x8e026758
    ctx->pc = 0x19cdd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19cddc: 0x50400005
    ctx->pc = 0x19CDDCu;
    {
        const bool branch_taken_0x19cddc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19cddc) {
            ctx->pc = 0x19CDE0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x19CDF4u;
            goto label_19cdf4;
        }
    }
    ctx->pc = 0x19CDE4u;
    // 0x19cde4: 0xac510dbc
    ctx->pc = 0x19cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3516), GPR_U32(ctx, 17));
    // 0x19cde8: 0xc0673e4
    ctx->pc = 0x19CDE8u;
    SET_GPR_U32(ctx, 31, 0x19CDF0u);
    ctx->pc = 0x19CDECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19CF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_UpdateEByteRate_0x19cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDF0u; }
        else if (ctx->pc != 0x19CDF0u) { ctx->pc = 0x19CDF0u; }
    }
    if (ctx->pc != 0x19CDF0u) { return; }
    ctx->pc = 0x19CDF0u;
    // 0x19cdf0: 0x102d
    ctx->pc = 0x19cdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cdf4:
    // 0x19cdf4: 0xdfbf0020
    ctx->pc = 0x19cdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19cdf8:
    // 0x19cdf8: 0xdfb10010
    ctx->pc = 0x19cdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cdfc: 0xdfb00000
    ctx->pc = 0x19cdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce00: 0x3e00008
    ctx->pc = 0x19CE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CDD8u: goto label_19cdd8;
            case 0x19CDF4u: goto label_19cdf4;
            case 0x19CDF8u: goto label_19cdf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CE08u;
}
