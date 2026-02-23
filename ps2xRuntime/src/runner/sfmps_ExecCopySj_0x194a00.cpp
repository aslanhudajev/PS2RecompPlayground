#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_ExecCopySj
// Address: 0x194a00 - 0x194a6c
void sfmps_ExecCopySj_0x194a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_ExecCopySj");


    ctx->pc = 0x194a00u;

label_194a00:
    // 0x194a00: 0x27bdffc0
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_194a04:
    // 0x194a04: 0xffb10020
    ctx->pc = 0x194a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_194a08:
    // 0x194a08: 0x3a0382d
    ctx->pc = 0x194a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194a0c:
    // 0x194a0c: 0xffb00010
    ctx->pc = 0x194a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_194a10:
    // 0x194a10: 0xa0882d
    ctx->pc = 0x194a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194a14:
    // 0x194a14: 0xffbf0030
    ctx->pc = 0x194a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_194a18:
    // 0x194a18: 0x80802d
    ctx->pc = 0x194a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194a1c:
    // 0x194a1c: 0x8e030000
    ctx->pc = 0x194a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194a20:
    // 0x194a20: 0x8c620018
    ctx->pc = 0x194a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_194a24:
    // 0x194a24: 0x40f809
label_194a28:
    if (ctx->pc == 0x194A28u) {
        ctx->pc = 0x194A28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194A2Cu;
        goto label_194a2c;
    }
    ctx->pc = 0x194A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194A2Cu);
        ctx->pc = 0x194A28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194A00u: goto label_194a00;
            case 0x194A04u: goto label_194a04;
            case 0x194A08u: goto label_194a08;
            case 0x194A0Cu: goto label_194a0c;
            case 0x194A10u: goto label_194a10;
            case 0x194A14u: goto label_194a14;
            case 0x194A18u: goto label_194a18;
            case 0x194A1Cu: goto label_194a1c;
            case 0x194A20u: goto label_194a20;
            case 0x194A24u: goto label_194a24;
            case 0x194A28u: goto label_194a28;
            case 0x194A2Cu: goto label_194a2c;
            case 0x194A30u: goto label_194a30;
            case 0x194A34u: goto label_194a34;
            case 0x194A38u: goto label_194a38;
            case 0x194A3Cu: goto label_194a3c;
            case 0x194A40u: goto label_194a40;
            case 0x194A44u: goto label_194a44;
            case 0x194A48u: goto label_194a48;
            case 0x194A4Cu: goto label_194a4c;
            case 0x194A50u: goto label_194a50;
            case 0x194A54u: goto label_194a54;
            case 0x194A58u: goto label_194a58;
            case 0x194A5Cu: goto label_194a5c;
            case 0x194A60u: goto label_194a60;
            case 0x194A64u: goto label_194a64;
            case 0x194A68u: goto label_194a68;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194A2Cu; }
            if (ctx->pc != 0x194A2Cu) { return; }
        }
    }
    ctx->pc = 0x194A2Cu;
label_194a2c:
    // 0x194a2c: 0x8fa40000
    ctx->pc = 0x194a2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_194a30:
    // 0x194a30: 0x220282d
    ctx->pc = 0x194a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194a34:
    // 0x194a34: 0xc060172
label_194a38:
    if (ctx->pc == 0x194A38u) {
        ctx->pc = 0x194A38u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x194A3Cu;
        goto label_194a3c;
    }
    ctx->pc = 0x194A34u;
    SET_GPR_U32(ctx, 31, 0x194A3Cu);
    ctx->pc = 0x194A38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A3Cu; }
        else if (ctx->pc != 0x194A3Cu) { ctx->pc = 0x194A3Cu; }
    }
    if (ctx->pc != 0x194A3Cu) { return; }
    ctx->pc = 0x194A3Cu;
label_194a3c:
    // 0x194a3c: 0x8e030000
    ctx->pc = 0x194a3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194a40:
    // 0x194a40: 0x200202d
    ctx->pc = 0x194a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194a44:
    // 0x194a44: 0x24050001
    ctx->pc = 0x194a44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_194a48:
    // 0x194a48: 0x8c620020
    ctx->pc = 0x194a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_194a4c:
    // 0x194a4c: 0x40f809
label_194a50:
    if (ctx->pc == 0x194A50u) {
        ctx->pc = 0x194A50u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194A54u;
        goto label_194a54;
    }
    ctx->pc = 0x194A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194A54u);
        ctx->pc = 0x194A50u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194A00u: goto label_194a00;
            case 0x194A04u: goto label_194a04;
            case 0x194A08u: goto label_194a08;
            case 0x194A0Cu: goto label_194a0c;
            case 0x194A10u: goto label_194a10;
            case 0x194A14u: goto label_194a14;
            case 0x194A18u: goto label_194a18;
            case 0x194A1Cu: goto label_194a1c;
            case 0x194A20u: goto label_194a20;
            case 0x194A24u: goto label_194a24;
            case 0x194A28u: goto label_194a28;
            case 0x194A2Cu: goto label_194a2c;
            case 0x194A30u: goto label_194a30;
            case 0x194A34u: goto label_194a34;
            case 0x194A38u: goto label_194a38;
            case 0x194A3Cu: goto label_194a3c;
            case 0x194A40u: goto label_194a40;
            case 0x194A44u: goto label_194a44;
            case 0x194A48u: goto label_194a48;
            case 0x194A4Cu: goto label_194a4c;
            case 0x194A50u: goto label_194a50;
            case 0x194A54u: goto label_194a54;
            case 0x194A58u: goto label_194a58;
            case 0x194A5Cu: goto label_194a5c;
            case 0x194A60u: goto label_194a60;
            case 0x194A64u: goto label_194a64;
            case 0x194A68u: goto label_194a68;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194A54u; }
            if (ctx->pc != 0x194A54u) { return; }
        }
    }
    ctx->pc = 0x194A54u;
label_194a54:
    // 0x194a54: 0x8fa20004
    ctx->pc = 0x194a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_194a58:
    // 0x194a58: 0xdfbf0030
    ctx->pc = 0x194a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194a5c:
    // 0x194a5c: 0xdfb10020
    ctx->pc = 0x194a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194a60:
    // 0x194a60: 0xdfb00010
    ctx->pc = 0x194a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194a64:
    // 0x194a64: 0x3e00008
label_194a68:
    if (ctx->pc == 0x194A68u) {
        ctx->pc = 0x194A68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x194A6Cu;
        goto label_fallthrough_0x194a64;
    }
    ctx->pc = 0x194A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194A68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194A00u: goto label_194a00;
            case 0x194A04u: goto label_194a04;
            case 0x194A08u: goto label_194a08;
            case 0x194A0Cu: goto label_194a0c;
            case 0x194A10u: goto label_194a10;
            case 0x194A14u: goto label_194a14;
            case 0x194A18u: goto label_194a18;
            case 0x194A1Cu: goto label_194a1c;
            case 0x194A20u: goto label_194a20;
            case 0x194A24u: goto label_194a24;
            case 0x194A28u: goto label_194a28;
            case 0x194A2Cu: goto label_194a2c;
            case 0x194A30u: goto label_194a30;
            case 0x194A34u: goto label_194a34;
            case 0x194A38u: goto label_194a38;
            case 0x194A3Cu: goto label_194a3c;
            case 0x194A40u: goto label_194a40;
            case 0x194A44u: goto label_194a44;
            case 0x194A48u: goto label_194a48;
            case 0x194A4Cu: goto label_194a4c;
            case 0x194A50u: goto label_194a50;
            case 0x194A54u: goto label_194a54;
            case 0x194A58u: goto label_194a58;
            case 0x194A5Cu: goto label_194a5c;
            case 0x194A60u: goto label_194a60;
            case 0x194A64u: goto label_194a64;
            case 0x194A68u: goto label_194a68;
            default: break;
        }
        return;
    }
label_fallthrough_0x194a64:
    ctx->pc = 0x194A6Cu;
}
