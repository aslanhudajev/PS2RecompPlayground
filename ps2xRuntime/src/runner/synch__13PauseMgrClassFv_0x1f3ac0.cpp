#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch__13PauseMgrClassFv
// Address: 0x1f3ac0 - 0x1f3b5c
void synch__13PauseMgrClassFv_0x1f3ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch__13PauseMgrClassFv");


    ctx->pc = 0x1f3ac0u;

label_1f3ac0:
    // 0x1f3ac0: 0x27bdffe0
    ctx->pc = 0x1f3ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f3ac4:
    // 0x1f3ac4: 0x7fbf0010
    ctx->pc = 0x1f3ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1f3ac8:
    // 0x1f3ac8: 0x7fb00000
    ctx->pc = 0x1f3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f3acc:
    // 0x1f3acc: 0x84820010
    ctx->pc = 0x1f3accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_1f3ad0:
    // 0x1f3ad0: 0x70808628
    ctx->pc = 0x1f3ad0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1f3ad4:
    // 0x1f3ad4: 0xc07ce58
label_1f3ad8:
    if (ctx->pc == 0x1F3AD8u) {
        ctx->pc = 0x1F3AD8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F3ADCu;
        goto label_1f3adc;
    }
    ctx->pc = 0x1F3AD4u;
    SET_GPR_U32(ctx, 31, 0x1F3ADCu);
    ctx->pc = 0x1F3AD8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1F3960u;
    {
        const uint32_t __entryPc = ctx->pc;
        exec__13PauseMgrClassFv_0x1f3960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ADCu; }
        else if (ctx->pc != 0x1F3ADCu) { ctx->pc = 0x1F3ADCu; }
    }
    if (ctx->pc != 0x1F3ADCu) { return; }
    ctx->pc = 0x1F3ADCu;
label_1f3adc:
    // 0x1f3adc: 0x8603000a
    ctx->pc = 0x1f3adcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1f3ae0:
    // 0x1f3ae0: 0x10600019
label_1f3ae4:
    if (ctx->pc == 0x1F3AE4u) {
        ctx->pc = 0x1F3AE8u;
        goto label_1f3ae8;
    }
    ctx->pc = 0x1F3AE0u;
    {
        const bool branch_taken_0x1f3ae0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3ae0) {
            ctx->pc = 0x1F3B48u;
            goto label_1f3b48;
        }
    }
    ctx->pc = 0x1F3AE8u;
label_1f3ae8:
    // 0x1f3ae8: 0x701821
    ctx->pc = 0x1f3ae8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1f3aec:
    // 0x1f3aec: 0x8063001b
    ctx->pc = 0x1f3aecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
label_1f3af0:
    // 0x1f3af0: 0xa6030006
    ctx->pc = 0x1f3af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f3af4:
    // 0x1f3af4: 0x86040012
    ctx->pc = 0x1f3af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1f3af8:
    // 0x1f3af8: 0x86030010
    ctx->pc = 0x1f3af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_1f3afc:
    // 0x1f3afc: 0x10830009
label_1f3b00:
    if (ctx->pc == 0x1F3B00u) {
        ctx->pc = 0x1F3B04u;
        goto label_1f3b04;
    }
    ctx->pc = 0x1F3AFCu;
    {
        const bool branch_taken_0x1f3afc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f3afc) {
            ctx->pc = 0x1F3B24u;
            goto label_1f3b24;
        }
    }
    ctx->pc = 0x1F3B04u;
label_1f3b04:
    // 0x1f3b04: 0x86020006
    ctx->pc = 0x1f3b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_1f3b08:
    // 0x1f3b08: 0xa6020004
    ctx->pc = 0x1f3b08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_1f3b0c:
    // 0x1f3b0c: 0x8e190000
    ctx->pc = 0x1f3b0cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3b10:
    // 0x1f3b10: 0x8f390014
    ctx->pc = 0x1f3b10u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f3b14:
    // 0x1f3b14: 0x320f809
label_1f3b18:
    if (ctx->pc == 0x1F3B18u) {
        ctx->pc = 0x1F3B18u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3B1Cu;
        goto label_1f3b1c;
    }
    ctx->pc = 0x1F3B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F3B1Cu);
        ctx->pc = 0x1F3B18u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3AC0u: goto label_1f3ac0;
            case 0x1F3AC4u: goto label_1f3ac4;
            case 0x1F3AC8u: goto label_1f3ac8;
            case 0x1F3ACCu: goto label_1f3acc;
            case 0x1F3AD0u: goto label_1f3ad0;
            case 0x1F3AD4u: goto label_1f3ad4;
            case 0x1F3AD8u: goto label_1f3ad8;
            case 0x1F3ADCu: goto label_1f3adc;
            case 0x1F3AE0u: goto label_1f3ae0;
            case 0x1F3AE4u: goto label_1f3ae4;
            case 0x1F3AE8u: goto label_1f3ae8;
            case 0x1F3AECu: goto label_1f3aec;
            case 0x1F3AF0u: goto label_1f3af0;
            case 0x1F3AF4u: goto label_1f3af4;
            case 0x1F3AF8u: goto label_1f3af8;
            case 0x1F3AFCu: goto label_1f3afc;
            case 0x1F3B00u: goto label_1f3b00;
            case 0x1F3B04u: goto label_1f3b04;
            case 0x1F3B08u: goto label_1f3b08;
            case 0x1F3B0Cu: goto label_1f3b0c;
            case 0x1F3B10u: goto label_1f3b10;
            case 0x1F3B14u: goto label_1f3b14;
            case 0x1F3B18u: goto label_1f3b18;
            case 0x1F3B1Cu: goto label_1f3b1c;
            case 0x1F3B20u: goto label_1f3b20;
            case 0x1F3B24u: goto label_1f3b24;
            case 0x1F3B28u: goto label_1f3b28;
            case 0x1F3B2Cu: goto label_1f3b2c;
            case 0x1F3B30u: goto label_1f3b30;
            case 0x1F3B34u: goto label_1f3b34;
            case 0x1F3B38u: goto label_1f3b38;
            case 0x1F3B3Cu: goto label_1f3b3c;
            case 0x1F3B40u: goto label_1f3b40;
            case 0x1F3B44u: goto label_1f3b44;
            case 0x1F3B48u: goto label_1f3b48;
            case 0x1F3B4Cu: goto label_1f3b4c;
            case 0x1F3B50u: goto label_1f3b50;
            case 0x1F3B54u: goto label_1f3b54;
            case 0x1F3B58u: goto label_1f3b58;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B1Cu; }
            if (ctx->pc != 0x1F3B1Cu) { return; }
        }
    }
    ctx->pc = 0x1F3B1Cu;
label_1f3b1c:
    // 0x1f3b1c: 0x1000000b
label_1f3b20:
    if (ctx->pc == 0x1F3B20u) {
        ctx->pc = 0x1F3B20u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F3B24u;
        goto label_1f3b24;
    }
    ctx->pc = 0x1F3B1Cu;
    {
        const bool branch_taken_0x1f3b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3B20u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1f3b1c) {
            ctx->pc = 0x1F3B4Cu;
            goto label_1f3b4c;
        }
    }
    ctx->pc = 0x1F3B24u;
label_1f3b24:
    // 0x1f3b24: 0x86040004
    ctx->pc = 0x1f3b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3b28:
    // 0x1f3b28: 0x86030006
    ctx->pc = 0x1f3b28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_1f3b2c:
    // 0x1f3b2c: 0x10830006
label_1f3b30:
    if (ctx->pc == 0x1F3B30u) {
        ctx->pc = 0x1F3B34u;
        goto label_1f3b34;
    }
    ctx->pc = 0x1F3B2Cu;
    {
        const bool branch_taken_0x1f3b2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f3b2c) {
            ctx->pc = 0x1F3B48u;
            goto label_1f3b48;
        }
    }
    ctx->pc = 0x1F3B34u;
label_1f3b34:
    // 0x1f3b34: 0xa6030004
    ctx->pc = 0x1f3b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_1f3b38:
    // 0x1f3b38: 0x8e190000
    ctx->pc = 0x1f3b38u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3b3c:
    // 0x1f3b3c: 0x8f390014
    ctx->pc = 0x1f3b3cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f3b40:
    // 0x1f3b40: 0x320f809
label_1f3b44:
    if (ctx->pc == 0x1F3B44u) {
        ctx->pc = 0x1F3B44u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3B48u;
        goto label_1f3b48;
    }
    ctx->pc = 0x1F3B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F3B48u);
        ctx->pc = 0x1F3B44u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3AC0u: goto label_1f3ac0;
            case 0x1F3AC4u: goto label_1f3ac4;
            case 0x1F3AC8u: goto label_1f3ac8;
            case 0x1F3ACCu: goto label_1f3acc;
            case 0x1F3AD0u: goto label_1f3ad0;
            case 0x1F3AD4u: goto label_1f3ad4;
            case 0x1F3AD8u: goto label_1f3ad8;
            case 0x1F3ADCu: goto label_1f3adc;
            case 0x1F3AE0u: goto label_1f3ae0;
            case 0x1F3AE4u: goto label_1f3ae4;
            case 0x1F3AE8u: goto label_1f3ae8;
            case 0x1F3AECu: goto label_1f3aec;
            case 0x1F3AF0u: goto label_1f3af0;
            case 0x1F3AF4u: goto label_1f3af4;
            case 0x1F3AF8u: goto label_1f3af8;
            case 0x1F3AFCu: goto label_1f3afc;
            case 0x1F3B00u: goto label_1f3b00;
            case 0x1F3B04u: goto label_1f3b04;
            case 0x1F3B08u: goto label_1f3b08;
            case 0x1F3B0Cu: goto label_1f3b0c;
            case 0x1F3B10u: goto label_1f3b10;
            case 0x1F3B14u: goto label_1f3b14;
            case 0x1F3B18u: goto label_1f3b18;
            case 0x1F3B1Cu: goto label_1f3b1c;
            case 0x1F3B20u: goto label_1f3b20;
            case 0x1F3B24u: goto label_1f3b24;
            case 0x1F3B28u: goto label_1f3b28;
            case 0x1F3B2Cu: goto label_1f3b2c;
            case 0x1F3B30u: goto label_1f3b30;
            case 0x1F3B34u: goto label_1f3b34;
            case 0x1F3B38u: goto label_1f3b38;
            case 0x1F3B3Cu: goto label_1f3b3c;
            case 0x1F3B40u: goto label_1f3b40;
            case 0x1F3B44u: goto label_1f3b44;
            case 0x1F3B48u: goto label_1f3b48;
            case 0x1F3B4Cu: goto label_1f3b4c;
            case 0x1F3B50u: goto label_1f3b50;
            case 0x1F3B54u: goto label_1f3b54;
            case 0x1F3B58u: goto label_1f3b58;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F3B48u; }
            if (ctx->pc != 0x1F3B48u) { return; }
        }
    }
    ctx->pc = 0x1F3B48u;
label_1f3b48:
    // 0x1f3b48: 0xa600000a
    ctx->pc = 0x1f3b48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f3b4c:
    // 0x1f3b4c: 0x7bbf0010
    ctx->pc = 0x1f3b4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3b50:
    // 0x1f3b50: 0x7bb00000
    ctx->pc = 0x1f3b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3b54:
    // 0x1f3b54: 0x3e00008
label_1f3b58:
    if (ctx->pc == 0x1F3B58u) {
        ctx->pc = 0x1F3B58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F3B5Cu;
        goto label_fallthrough_0x1f3b54;
    }
    ctx->pc = 0x1F3B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3B58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3AC0u: goto label_1f3ac0;
            case 0x1F3AC4u: goto label_1f3ac4;
            case 0x1F3AC8u: goto label_1f3ac8;
            case 0x1F3ACCu: goto label_1f3acc;
            case 0x1F3AD0u: goto label_1f3ad0;
            case 0x1F3AD4u: goto label_1f3ad4;
            case 0x1F3AD8u: goto label_1f3ad8;
            case 0x1F3ADCu: goto label_1f3adc;
            case 0x1F3AE0u: goto label_1f3ae0;
            case 0x1F3AE4u: goto label_1f3ae4;
            case 0x1F3AE8u: goto label_1f3ae8;
            case 0x1F3AECu: goto label_1f3aec;
            case 0x1F3AF0u: goto label_1f3af0;
            case 0x1F3AF4u: goto label_1f3af4;
            case 0x1F3AF8u: goto label_1f3af8;
            case 0x1F3AFCu: goto label_1f3afc;
            case 0x1F3B00u: goto label_1f3b00;
            case 0x1F3B04u: goto label_1f3b04;
            case 0x1F3B08u: goto label_1f3b08;
            case 0x1F3B0Cu: goto label_1f3b0c;
            case 0x1F3B10u: goto label_1f3b10;
            case 0x1F3B14u: goto label_1f3b14;
            case 0x1F3B18u: goto label_1f3b18;
            case 0x1F3B1Cu: goto label_1f3b1c;
            case 0x1F3B20u: goto label_1f3b20;
            case 0x1F3B24u: goto label_1f3b24;
            case 0x1F3B28u: goto label_1f3b28;
            case 0x1F3B2Cu: goto label_1f3b2c;
            case 0x1F3B30u: goto label_1f3b30;
            case 0x1F3B34u: goto label_1f3b34;
            case 0x1F3B38u: goto label_1f3b38;
            case 0x1F3B3Cu: goto label_1f3b3c;
            case 0x1F3B40u: goto label_1f3b40;
            case 0x1F3B44u: goto label_1f3b44;
            case 0x1F3B48u: goto label_1f3b48;
            case 0x1F3B4Cu: goto label_1f3b4c;
            case 0x1F3B50u: goto label_1f3b50;
            case 0x1F3B54u: goto label_1f3b54;
            case 0x1F3B58u: goto label_1f3b58;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f3b54:
    ctx->pc = 0x1F3B5Cu;
}
