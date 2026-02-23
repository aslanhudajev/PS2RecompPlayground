#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_StartMem2
// Address: 0x172d70 - 0x172e08
void ADXT_StartMem2_0x172d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_StartMem2");


    ctx->pc = 0x172d70u;

    // 0x172d70: 0x27bdffc0
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172d74: 0x8f828260
    ctx->pc = 0x172d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x172d78: 0xffb20020
    ctx->pc = 0x172d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x172d7c: 0xffb10010
    ctx->pc = 0x172d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x172d80: 0x80902d
    ctx->pc = 0x172d80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d84: 0xffb00000
    ctx->pc = 0x172d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172d88: 0xc0882d
    ctx->pc = 0x172d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d8c: 0xffbf0030
    ctx->pc = 0x172d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x172d90: 0xc05c73a
    ctx->pc = 0x172D90u;
    SET_GPR_U32(ctx, 31, 0x172D98u);
    ctx->pc = 0x172D94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D98u; }
        else if (ctx->pc != 0x172D98u) { ctx->pc = 0x172D98u; }
    }
    if (ctx->pc != 0x172D98u) { return; }
    ctx->pc = 0x172D98u;
    // 0x172d98: 0xc05a4e4
    ctx->pc = 0x172D98u;
    SET_GPR_U32(ctx, 31, 0x172DA0u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DA0u; }
        else if (ctx->pc != 0x172DA0u) { ctx->pc = 0x172DA0u; }
    }
    if (ctx->pc != 0x172DA0u) { return; }
    ctx->pc = 0x172DA0u;
    // 0x172da0: 0x200202d
    ctx->pc = 0x172da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172da4: 0xc05efec
    ctx->pc = 0x172DA4u;
    SET_GPR_U32(ctx, 31, 0x172DACu);
    ctx->pc = 0x172DA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Create_0x17bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DACu; }
        else if (ctx->pc != 0x172DACu) { ctx->pc = 0x172DACu; }
    }
    if (ctx->pc != 0x172DACu) { return; }
    ctx->pc = 0x172DACu;
    // 0x172dac: 0x1440000b
    ctx->pc = 0x172DACu;
    {
        const bool branch_taken_0x172dac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172DB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172dac) {
            ctx->pc = 0x172DDCu;
            goto label_172ddc;
        }
    }
    ctx->pc = 0x172DB4u;
    // 0x172db4: 0xc05a4f0
    ctx->pc = 0x172DB4u;
    SET_GPR_U32(ctx, 31, 0x172DBCu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DBCu; }
        else if (ctx->pc != 0x172DBCu) { ctx->pc = 0x172DBCu; }
    }
    if (ctx->pc != 0x172DBCu) { return; }
    ctx->pc = 0x172DBCu;
    // 0x172dbc: 0x3c04002c
    ctx->pc = 0x172dbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x172dc0: 0xdfbf0030
    ctx->pc = 0x172dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172dc4: 0xdfb20020
    ctx->pc = 0x172dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172dc8: 0x2484a310
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943504));
    // 0x172dcc: 0xdfb10010
    ctx->pc = 0x172dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172dd0: 0xdfb00000
    ctx->pc = 0x172dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172dd4: 0x805a854
    ctx->pc = 0x172DD4u;
    ctx->pc = 0x172DD8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x16A150u;
    ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime); return;
    ctx->pc = 0x172DDCu;
label_172ddc:
    // 0x172ddc: 0xc05c660
    ctx->pc = 0x172DDCu;
    SET_GPR_U32(ctx, 31, 0x172DE4u);
    ctx->pc = 0x172DE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171980u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_start_sj_0x171980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DE4u; }
        else if (ctx->pc != 0x172DE4u) { ctx->pc = 0x172DE4u; }
    }
    if (ctx->pc != 0x172DE4u) { return; }
    ctx->pc = 0x172DE4u;
    // 0x172de4: 0x24020002
    ctx->pc = 0x172de4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172de8: 0xa2400098
    ctx->pc = 0x172de8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x172dec: 0xa2420002
    ctx->pc = 0x172decu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x172df0: 0xdfbf0030
    ctx->pc = 0x172df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172df4: 0xdfb20020
    ctx->pc = 0x172df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172df8: 0xdfb10010
    ctx->pc = 0x172df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172dfc: 0xdfb00000
    ctx->pc = 0x172dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172e00: 0x805a4f0
    ctx->pc = 0x172E00u;
    ctx->pc = 0x172E04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x172E08u;
}
