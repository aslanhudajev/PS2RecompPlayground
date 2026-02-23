#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiClose
// Address: 0x178e38 - 0x178ed8
void htCiClose_0x178e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiClose");


    ctx->pc = 0x178e38u;

    // 0x178e38: 0x27bdffd0
    ctx->pc = 0x178e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178e3c: 0xffb10010
    ctx->pc = 0x178e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x178e40: 0xffbf0020
    ctx->pc = 0x178e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178e44: 0x80882d
    ctx->pc = 0x178e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e48: 0x1220001e
    ctx->pc = 0x178E48u;
    {
        const bool branch_taken_0x178e48 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x178E4Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x178e48) {
            ctx->pc = 0x178EC4u;
            goto label_178ec4;
        }
    }
    ctx->pc = 0x178E50u;
    // 0x178e50: 0x92220002
    ctx->pc = 0x178e50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x178e54: 0x2c420002
    ctx->pc = 0x178e54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x178e58: 0x54400004
    ctx->pc = 0x178E58u;
    {
        const bool branch_taken_0x178e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178e58) {
            ctx->pc = 0x178E5Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->pc = 0x178E6Cu;
            goto label_178e6c;
        }
    }
    ctx->pc = 0x178E60u;
    // 0x178e60: 0xc05e42c
    ctx->pc = 0x178E60u;
    SET_GPR_U32(ctx, 31, 0x178E68u);
    ctx->pc = 0x1790B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        htCiStopTr_0x1790b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E68u; }
        else if (ctx->pc != 0x178E68u) { ctx->pc = 0x178E68u; }
    }
    if (ctx->pc != 0x178E68u) { return; }
    ctx->pc = 0x178E68u;
    // 0x178e68: 0x82220001
    ctx->pc = 0x178e68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_178e6c:
    // 0x178e6c: 0x5440000f
    ctx->pc = 0x178E6Cu;
    {
        const bool branch_taken_0x178e6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178e6c) {
            ctx->pc = 0x178E70u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x178EACu;
            goto label_178eac;
        }
    }
    ctx->pc = 0x178E74u;
    // 0x178e74: 0xc05e21a
    ctx->pc = 0x178E74u;
    SET_GPR_U32(ctx, 31, 0x178E7Cu);
    ctx->pc = 0x178868u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_io_0x178868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E7Cu; }
        else if (ctx->pc != 0x178E7Cu) { ctx->pc = 0x178E7Cu; }
    }
    if (ctx->pc != 0x178E7Cu) { return; }
    ctx->pc = 0x178E7Cu;
    // 0x178e7c: 0xc05d95e
    ctx->pc = 0x178E7Cu;
    SET_GPR_U32(ctx, 31, 0x178E84u);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E84u; }
        else if (ctx->pc != 0x178E84u) { ctx->pc = 0x178E84u; }
    }
    if (ctx->pc != 0x178E84u) { return; }
    ctx->pc = 0x178E84u;
    // 0x178e84: 0xc0562e0
    ctx->pc = 0x178E84u;
    SET_GPR_U32(ctx, 31, 0x178E8Cu);
    ctx->pc = 0x178E88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E8Cu; }
        else if (ctx->pc != 0x178E8Cu) { ctx->pc = 0x178E8Cu; }
    }
    if (ctx->pc != 0x178E8Cu) { return; }
    ctx->pc = 0x178E8Cu;
    // 0x178e8c: 0xc05d966
    ctx->pc = 0x178E8Cu;
    SET_GPR_U32(ctx, 31, 0x178E94u);
    ctx->pc = 0x178E90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E94u; }
        else if (ctx->pc != 0x178E94u) { ctx->pc = 0x178E94u; }
    }
    if (ctx->pc != 0x178E94u) { return; }
    ctx->pc = 0x178E94u;
    // 0x178e94: 0x6030005
    ctx->pc = 0x178E94u;
    {
        const bool branch_taken_0x178e94 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x178e94) {
            ctx->pc = 0x178E98u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x178EACu;
            goto label_178eac;
        }
    }
    ctx->pc = 0x178E9Cu;
    // 0x178e9c: 0x3c04002c
    ctx->pc = 0x178e9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178ea0: 0xc05114a
    ctx->pc = 0x178EA0u;
    SET_GPR_U32(ctx, 31, 0x178EA8u);
    ctx->pc = 0x178EA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948888));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178EA8u; }
        else if (ctx->pc != 0x178EA8u) { ctx->pc = 0x178EA8u; }
    }
    if (ctx->pc != 0x178EA8u) { return; }
    ctx->pc = 0x178EA8u;
    // 0x178ea8: 0xa2200000
    ctx->pc = 0x178ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_178eac:
    // 0x178eac: 0x220202d
    ctx->pc = 0x178eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178eb0: 0xdfbf0020
    ctx->pc = 0x178eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178eb4: 0xdfb10010
    ctx->pc = 0x178eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178eb8: 0xdfb00000
    ctx->pc = 0x178eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ebc: 0x805e324
    ctx->pc = 0x178EBCu;
    ctx->pc = 0x178EC0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x178C90u;
    htci_free_0x178c90(rdram, ctx, runtime); return;
    ctx->pc = 0x178EC4u;
label_178ec4:
    // 0x178ec4: 0xdfbf0020
    ctx->pc = 0x178ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178ec8: 0xdfb10010
    ctx->pc = 0x178ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ecc: 0xdfb00000
    ctx->pc = 0x178eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ed0: 0x3e00008
    ctx->pc = 0x178ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178ED4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178E6Cu: goto label_178e6c;
            case 0x178EACu: goto label_178eac;
            case 0x178EC4u: goto label_178ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178ED8u;
}
