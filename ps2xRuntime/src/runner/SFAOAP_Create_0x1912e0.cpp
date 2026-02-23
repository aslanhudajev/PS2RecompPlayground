#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_Create
// Address: 0x1912e0 - 0x19131c
void SFAOAP_Create_0x1912e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_Create");


    ctx->pc = 0x1912e0u;

    // 0x1912e0: 0x27bdffe0
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1912e4: 0x24050006
    ctx->pc = 0x1912e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1912e8: 0xffb00000
    ctx->pc = 0x1912e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1912ec: 0xffbf0010
    ctx->pc = 0x1912ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1912f0: 0xc0674c2
    ctx->pc = 0x1912F0u;
    SET_GPR_U32(ctx, 31, 0x1912F8u);
    ctx->pc = 0x1912F4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912F8u; }
        else if (ctx->pc != 0x1912F8u) { ctx->pc = 0x1912F8u; }
    }
    if (ctx->pc != 0x1912F8u) { return; }
    ctx->pc = 0x1912F8u;
    // 0x1912f8: 0x10400004
    ctx->pc = 0x1912F8u;
    {
        const bool branch_taken_0x1912f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1912FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1912f8) {
            ctx->pc = 0x19130Cu;
            goto label_19130c;
        }
    }
    ctx->pc = 0x191300u;
    // 0x191300: 0xc0644c8
    ctx->pc = 0x191300u;
    SET_GPR_U32(ctx, 31, 0x191308u);
    ctx->pc = 0x191304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 22944));
    ctx->pc = 0x191320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfaoap_InitInf_0x191320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191308u; }
        else if (ctx->pc != 0x191308u) { ctx->pc = 0x191308u; }
    }
    if (ctx->pc != 0x191308u) { return; }
    ctx->pc = 0x191308u;
    // 0x191308: 0x102d
    ctx->pc = 0x191308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19130c:
    // 0x19130c: 0xdfbf0010
    ctx->pc = 0x19130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191310: 0xdfb00000
    ctx->pc = 0x191310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191314: 0x3e00008
    ctx->pc = 0x191314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19130Cu: goto label_19130c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19131Cu;
}
