#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_ExecServer
// Address: 0x16bde8 - 0x16be50
void ADXF_ExecServer_0x16bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_ExecServer");


    ctx->pc = 0x16bde8u;

    // 0x16bde8: 0x27bdffc0
    ctx->pc = 0x16bde8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bdec: 0xffb20020
    ctx->pc = 0x16bdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16bdf0: 0xffb10010
    ctx->pc = 0x16bdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16bdf4: 0xffb00000
    ctx->pc = 0x16bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bdf8: 0xffbf0030
    ctx->pc = 0x16bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16bdfc: 0xc05a4e4
    ctx->pc = 0x16BDFCu;
    SET_GPR_U32(ctx, 31, 0x16BE04u);
    ctx->pc = 0x16BE00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE04u; }
        else if (ctx->pc != 0x16BE04u) { ctx->pc = 0x16BE04u; }
    }
    if (ctx->pc != 0x16BE04u) { return; }
    ctx->pc = 0x16BE04u;
    // 0x16be04: 0x3c020023
    ctx->pc = 0x16be04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16be08: 0x2450b598
    ctx->pc = 0x16be08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294948248));
    // 0x16be0c: 0x26111380
    ctx->pc = 0x16be0cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4992));
    // 0x16be10: 0x82020000
    ctx->pc = 0x16be10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16be14: 0x0
    ctx->pc = 0x16be14u;
    // NOP
label_16be18:
    // 0x16be18: 0x54520004
    ctx->pc = 0x16BE18u;
    {
        const bool branch_taken_0x16be18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x16be18) {
            ctx->pc = 0x16BE1Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 312));
            ctx->pc = 0x16BE2Cu;
            goto label_16be2c;
        }
    }
    ctx->pc = 0x16BE20u;
    // 0x16be20: 0xc05af5c
    ctx->pc = 0x16BE20u;
    SET_GPR_U32(ctx, 31, 0x16BE28u);
    ctx->pc = 0x16BE24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BD70u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_ExecOne_0x16bd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE28u; }
        else if (ctx->pc != 0x16BE28u) { ctx->pc = 0x16BE28u; }
    }
    if (ctx->pc != 0x16BE28u) { return; }
    ctx->pc = 0x16BE28u;
    // 0x16be28: 0x26100138
    ctx->pc = 0x16be28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 312));
label_16be2c:
    // 0x16be2c: 0x211102a
    ctx->pc = 0x16be2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x16be30: 0x5440fff9
    ctx->pc = 0x16BE30u;
    {
        const bool branch_taken_0x16be30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16be30) {
            ctx->pc = 0x16BE34u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16BE18u;
            goto label_16be18;
        }
    }
    ctx->pc = 0x16BE38u;
    // 0x16be38: 0xdfbf0030
    ctx->pc = 0x16be38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16be3c: 0xdfb20020
    ctx->pc = 0x16be3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16be40: 0xdfb10010
    ctx->pc = 0x16be40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16be44: 0xdfb00000
    ctx->pc = 0x16be44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16be48: 0x805a4f0
    ctx->pc = 0x16BE48u;
    ctx->pc = 0x16BE4Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x16BE50u;
}
