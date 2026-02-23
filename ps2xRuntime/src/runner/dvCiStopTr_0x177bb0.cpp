#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiStopTr
// Address: 0x177bb0 - 0x177c38
void dvCiStopTr_0x177bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiStopTr");


    ctx->pc = 0x177bb0u;

    // 0x177bb0: 0x27bdffe0
    ctx->pc = 0x177bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177bb4: 0xffb00000
    ctx->pc = 0x177bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177bb8: 0x80802d
    ctx->pc = 0x177bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bbc: 0x16000008
    ctx->pc = 0x177BBCu;
    {
        const bool branch_taken_0x177bbc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x177BC0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x177bbc) {
            ctx->pc = 0x177BE0u;
            goto label_177be0;
        }
    }
    ctx->pc = 0x177BC4u;
    // 0x177bc4: 0x3c05002c
    ctx->pc = 0x177bc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177bc8: 0xdfbf0010
    ctx->pc = 0x177bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177bcc: 0xdfb00000
    ctx->pc = 0x177bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177bd0: 0x202d
    ctx->pc = 0x177bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bd4: 0x24a5b400
    ctx->pc = 0x177bd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947840));
    // 0x177bd8: 0x805dd3c
    ctx->pc = 0x177BD8u;
    ctx->pc = 0x177BDCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1774F0u;
    dvci_call_errfn_0x1774f0(rdram, ctx, runtime); return;
    ctx->pc = 0x177BE0u;
label_177be0:
    // 0x177be0: 0x82020002
    ctx->pc = 0x177be0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x177be4: 0x10400011
    ctx->pc = 0x177BE4u;
    {
        const bool branch_taken_0x177be4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177BE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x177be4) {
            ctx->pc = 0x177C2Cu;
            goto label_177c2c;
        }
    }
    ctx->pc = 0x177BECu;
    // 0x177bec: 0xc05dd5c
    ctx->pc = 0x177BECu;
    SET_GPR_U32(ctx, 31, 0x177BF4u);
    ctx->pc = 0x177BF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177570u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiExecHndl_0x177570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BF4u; }
        else if (ctx->pc != 0x177BF4u) { ctx->pc = 0x177BF4u; }
    }
    if (ctx->pc != 0x177BF4u) { return; }
    ctx->pc = 0x177BF4u;
    // 0x177bf4: 0x82030002
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x177bf8: 0x24020002
    ctx->pc = 0x177bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x177bfc: 0x54620004
    ctx->pc = 0x177BFCu;
    {
        const bool branch_taken_0x177bfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x177bfc) {
            ctx->pc = 0x177C00u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x177C10u;
            goto label_177c10;
        }
    }
    ctx->pc = 0x177C04u;
    // 0x177c04: 0xc05d848
    ctx->pc = 0x177C04u;
    SET_GPR_U32(ctx, 31, 0x177C0Cu);
    ctx->pc = 0x176120u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Break_0x176120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C0Cu; }
        else if (ctx->pc != 0x177C0Cu) { ctx->pc = 0x177C0Cu; }
    }
    if (ctx->pc != 0x177C0Cu) { return; }
    ctx->pc = 0x177C0Cu;
    // 0x177c0c: 0x8e050010
    ctx->pc = 0x177c0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_177c10:
    // 0x177c10: 0x8e040014
    ctx->pc = 0x177c10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x177c14: 0x52ac0
    ctx->pc = 0x177c14u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    // 0x177c18: 0x852821
    ctx->pc = 0x177c18u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x177c1c: 0xc05549c
    ctx->pc = 0x177C1Cu;
    SET_GPR_U32(ctx, 31, 0x177C24u);
    ctx->pc = 0x177C20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x155270u;
    {
        const uint32_t __entryPc = ctx->pc;
        InvalidDCache_0x155270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C24u; }
        else if (ctx->pc != 0x177C24u) { ctx->pc = 0x177C24u; }
    }
    if (ctx->pc != 0x177C24u) { return; }
    ctx->pc = 0x177C24u;
    // 0x177c24: 0xa2000002
    ctx->pc = 0x177c24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x177c28: 0xdfbf0010
    ctx->pc = 0x177c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_177c2c:
    // 0x177c2c: 0xdfb00000
    ctx->pc = 0x177c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177c30: 0x3e00008
    ctx->pc = 0x177C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177BE0u: goto label_177be0;
            case 0x177C10u: goto label_177c10;
            case 0x177C2Cu: goto label_177c2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177C38u;
}
