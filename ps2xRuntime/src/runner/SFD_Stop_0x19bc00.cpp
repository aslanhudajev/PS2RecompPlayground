#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Stop
// Address: 0x19bc00 - 0x19bc50
void SFD_Stop_0x19bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Stop");


    ctx->pc = 0x19bc00u;

    // 0x19bc00: 0x27bdffe0
    ctx->pc = 0x19bc00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bc04: 0xffb00000
    ctx->pc = 0x19bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bc08: 0xffbf0010
    ctx->pc = 0x19bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bc0c: 0xc064f1e
    ctx->pc = 0x19BC0Cu;
    SET_GPR_U32(ctx, 31, 0x19BC14u);
    ctx->pc = 0x19BC10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC14u; }
        else if (ctx->pc != 0x19BC14u) { ctx->pc = 0x19BC14u; }
    }
    if (ctx->pc != 0x19BC14u) { return; }
    ctx->pc = 0x19BC14u;
    // 0x19bc14: 0x10400006
    ctx->pc = 0x19BC14u;
    {
        const bool branch_taken_0x19bc14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BC18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bc14) {
            ctx->pc = 0x19BC30u;
            goto label_19bc30;
        }
    }
    ctx->pc = 0x19BC1Cu;
    // 0x19bc1c: 0x3c05ff00
    ctx->pc = 0x19bc1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bc20: 0xc064ea0
    ctx->pc = 0x19BC20u;
    SET_GPR_U32(ctx, 31, 0x19BC28u);
    ctx->pc = 0x19BC24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 307));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC28u; }
        else if (ctx->pc != 0x19BC28u) { ctx->pc = 0x19BC28u; }
    }
    if (ctx->pc != 0x19BC28u) { return; }
    ctx->pc = 0x19BC28u;
    // 0x19bc28: 0x10000006
    ctx->pc = 0x19BC28u;
    {
        const bool branch_taken_0x19bc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BC2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19bc28) {
            ctx->pc = 0x19BC44u;
            goto label_19bc44;
        }
    }
    ctx->pc = 0x19BC30u;
label_19bc30:
    // 0x19bc30: 0xc066f14
    ctx->pc = 0x19BC30u;
    SET_GPR_U32(ctx, 31, 0x19BC38u);
    ctx->pc = 0x19BC34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_Stop_0x19bc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC38u; }
        else if (ctx->pc != 0x19BC38u) { ctx->pc = 0x19BC38u; }
    }
    if (ctx->pc != 0x19BC38u) { return; }
    ctx->pc = 0x19BC38u;
    // 0x19bc38: 0x24030001
    ctx->pc = 0x19bc38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc3c: 0xae03003c
    ctx->pc = 0x19bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x19bc40: 0xdfbf0010
    ctx->pc = 0x19bc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bc44:
    // 0x19bc44: 0xdfb00000
    ctx->pc = 0x19bc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bc48: 0x3e00008
    ctx->pc = 0x19BC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BC4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC30u: goto label_19bc30;
            case 0x19BC44u: goto label_19bc44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BC50u;
}
