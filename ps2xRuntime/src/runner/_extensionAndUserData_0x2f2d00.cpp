#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _extensionAndUserData
// Address: 0x2f2d00 - 0x2f2db0
void _extensionAndUserData_0x2f2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2d00u;

label_2f2d00:
    // 0x2f2d00: 0x27bdffe0
    ctx->pc = 0x2f2d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f2d04:
    // 0x2f2d04: 0xffb00000
    ctx->pc = 0x2f2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f2d08:
    // 0x2f2d08: 0xffbf0010
    ctx->pc = 0x2f2d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f2d0c:
    // 0x2f2d0c: 0xc0bca8c
label_2f2d10:
    if (ctx->pc == 0x2F2D10u) {
        ctx->pc = 0x2F2D10u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        ctx->pc = 0x2F2D14u;
        goto label_2f2d14;
    }
    ctx->pc = 0x2F2D0Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D14u);
    ctx->pc = 0x2F2D10u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F2A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x2f2a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D14u; }
    }
    if (ctx->pc != 0x2F2D14u) { return; }
    ctx->pc = 0x2F2D14u;
label_2f2d14:
    // 0x2f2d14: 0x10000019
label_2f2d18:
    if (ctx->pc == 0x2F2D18u) {
        ctx->pc = 0x2F2D1Cu;
        goto label_2f2d1c;
    }
    ctx->pc = 0x2F2D14u;
    {
        const bool branch_taken_0x2f2d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2d14) {
            ctx->pc = 0x2F2D7Cu;
            goto label_2f2d7c;
        }
    }
    ctx->pc = 0x2F2D1Cu;
label_2f2d1c:
    // 0x2f2d1c: 0x0
    ctx->pc = 0x2f2d1cu;
    // NOP
label_2f2d20:
    // 0x2f2d20: 0x14660012
label_2f2d24:
    if (ctx->pc == 0x2F2D24u) {
        ctx->pc = 0x2F2D28u;
        goto label_2f2d28;
    }
    ctx->pc = 0x2F2D20u;
    {
        const bool branch_taken_0x2f2d20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x2f2d20) {
            ctx->pc = 0x2F2D6Cu;
            goto label_2f2d6c;
        }
    }
    ctx->pc = 0x2F2D28u;
label_2f2d28:
    // 0x2f2d28: 0xc0bc9ec
label_2f2d2c:
    if (ctx->pc == 0x2F2D2Cu) {
        ctx->pc = 0x2F2D30u;
        goto label_2f2d30;
    }
    ctx->pc = 0x2F2D28u;
    SET_GPR_U32(ctx, 31, 0x2F2D30u);
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D30u; }
    }
    if (ctx->pc != 0x2F2D30u) { return; }
    ctx->pc = 0x2F2D30u;
label_2f2d30:
    // 0x2f2d30: 0xc0bca32
label_2f2d34:
    if (ctx->pc == 0x2F2D34u) {
        ctx->pc = 0x2F2D34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F2D38u;
        goto label_2f2d38;
    }
    ctx->pc = 0x2F2D30u;
    SET_GPR_U32(ctx, 31, 0x2F2D38u);
    ctx->pc = 0x2F2D34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D38u; }
    }
    if (ctx->pc != 0x2F2D38u) { return; }
    ctx->pc = 0x2F2D38u;
label_2f2d38:
    // 0x2f2d38: 0x2403000a
    ctx->pc = 0x2f2d38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_2f2d3c:
    // 0x2f2d3c: 0x26043980
    ctx->pc = 0x2f2d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 14720));
label_2f2d40:
    // 0x2f2d40: 0x62182b
    ctx->pc = 0x2f2d40u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f2d44:
    // 0x2f2d44: 0x3100b
    ctx->pc = 0x2f2d44u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_2f2d48:
    // 0x2f2d48: 0x21080
    ctx->pc = 0x2f2d48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2f2d4c:
    // 0x2f2d4c: 0x441021
    ctx->pc = 0x2f2d4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f2d50:
    // 0x2f2d50: 0x8c430000
    ctx->pc = 0x2f2d50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2d54:
    // 0x2f2d54: 0x60f809
label_2f2d58:
    if (ctx->pc == 0x2F2D58u) {
        ctx->pc = 0x2F2D5Cu;
        goto label_2f2d5c;
    }
    ctx->pc = 0x2F2D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2D5Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2D00u: goto label_2f2d00;
            case 0x2F2D04u: goto label_2f2d04;
            case 0x2F2D08u: goto label_2f2d08;
            case 0x2F2D0Cu: goto label_2f2d0c;
            case 0x2F2D10u: goto label_2f2d10;
            case 0x2F2D14u: goto label_2f2d14;
            case 0x2F2D18u: goto label_2f2d18;
            case 0x2F2D1Cu: goto label_2f2d1c;
            case 0x2F2D20u: goto label_2f2d20;
            case 0x2F2D24u: goto label_2f2d24;
            case 0x2F2D28u: goto label_2f2d28;
            case 0x2F2D2Cu: goto label_2f2d2c;
            case 0x2F2D30u: goto label_2f2d30;
            case 0x2F2D34u: goto label_2f2d34;
            case 0x2F2D38u: goto label_2f2d38;
            case 0x2F2D3Cu: goto label_2f2d3c;
            case 0x2F2D40u: goto label_2f2d40;
            case 0x2F2D44u: goto label_2f2d44;
            case 0x2F2D48u: goto label_2f2d48;
            case 0x2F2D4Cu: goto label_2f2d4c;
            case 0x2F2D50u: goto label_2f2d50;
            case 0x2F2D54u: goto label_2f2d54;
            case 0x2F2D58u: goto label_2f2d58;
            case 0x2F2D5Cu: goto label_2f2d5c;
            case 0x2F2D60u: goto label_2f2d60;
            case 0x2F2D64u: goto label_2f2d64;
            case 0x2F2D68u: goto label_2f2d68;
            case 0x2F2D6Cu: goto label_2f2d6c;
            case 0x2F2D70u: goto label_2f2d70;
            case 0x2F2D74u: goto label_2f2d74;
            case 0x2F2D78u: goto label_2f2d78;
            case 0x2F2D7Cu: goto label_2f2d7c;
            case 0x2F2D80u: goto label_2f2d80;
            case 0x2F2D84u: goto label_2f2d84;
            case 0x2F2D88u: goto label_2f2d88;
            case 0x2F2D8Cu: goto label_2f2d8c;
            case 0x2F2D90u: goto label_2f2d90;
            case 0x2F2D94u: goto label_2f2d94;
            case 0x2F2D98u: goto label_2f2d98;
            case 0x2F2D9Cu: goto label_2f2d9c;
            case 0x2F2DA0u: goto label_2f2da0;
            case 0x2F2DA4u: goto label_2f2da4;
            case 0x2F2DA8u: goto label_2f2da8;
            case 0x2F2DACu: goto label_2f2dac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D5Cu; }
            if (ctx->pc != 0x2F2D5Cu) { return; }
        }
    }
    ctx->pc = 0x2F2D5Cu;
label_2f2d5c:
    // 0x2f2d5c: 0xc0bca8c
label_2f2d60:
    if (ctx->pc == 0x2F2D60u) {
        ctx->pc = 0x2F2D64u;
        goto label_2f2d64;
    }
    ctx->pc = 0x2F2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D64u);
    ctx->pc = 0x2F2A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x2f2a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D64u; }
    }
    if (ctx->pc != 0x2F2D64u) { return; }
    ctx->pc = 0x2F2D64u;
label_2f2d64:
    // 0x2f2d64: 0x10000005
label_2f2d68:
    if (ctx->pc == 0x2F2D68u) {
        ctx->pc = 0x2F2D6Cu;
        goto label_2f2d6c;
    }
    ctx->pc = 0x2F2D64u;
    {
        const bool branch_taken_0x2f2d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2d64) {
            ctx->pc = 0x2F2D7Cu;
            goto label_2f2d7c;
        }
    }
    ctx->pc = 0x2F2D6Cu;
label_2f2d6c:
    // 0x2f2d6c: 0xc0bc9ec
label_2f2d70:
    if (ctx->pc == 0x2F2D70u) {
        ctx->pc = 0x2F2D70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2F2D74u;
        goto label_2f2d74;
    }
    ctx->pc = 0x2F2D6Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D74u);
    ctx->pc = 0x2F2D70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D74u; }
    }
    if (ctx->pc != 0x2F2D74u) { return; }
    ctx->pc = 0x2F2D74u;
label_2f2d74:
    // 0x2f2d74: 0xc0bca8c
label_2f2d78:
    if (ctx->pc == 0x2F2D78u) {
        ctx->pc = 0x2F2D7Cu;
        goto label_2f2d7c;
    }
    ctx->pc = 0x2F2D74u;
    SET_GPR_U32(ctx, 31, 0x2F2D7Cu);
    ctx->pc = 0x2F2A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x2f2a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D7Cu; }
    }
    if (ctx->pc != 0x2F2D7Cu) { return; }
    ctx->pc = 0x2F2D7Cu;
label_2f2d7c:
    // 0x2f2d7c: 0xc0bc99e
label_2f2d80:
    if (ctx->pc == 0x2F2D80u) {
        ctx->pc = 0x2F2D80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2F2D84u;
        goto label_2f2d84;
    }
    ctx->pc = 0x2F2D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D84u);
    ctx->pc = 0x2F2D80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F2678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x2f2678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D84u; }
    }
    if (ctx->pc != 0x2F2D84u) { return; }
    ctx->pc = 0x2F2D84u;
label_2f2d84:
    // 0x2f2d84: 0x40182d
    ctx->pc = 0x2f2d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d88:
    // 0x2f2d88: 0x24040020
    ctx->pc = 0x2f2d88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
label_2f2d8c:
    // 0x2f2d8c: 0x240201b5
    ctx->pc = 0x2f2d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 437));
label_2f2d90:
    // 0x2f2d90: 0x240601b5
    ctx->pc = 0x2f2d90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 437));
label_2f2d94:
    // 0x2f2d94: 0x1062ffe4
label_2f2d98:
    if (ctx->pc == 0x2F2D98u) {
        ctx->pc = 0x2F2D98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 434));
        ctx->pc = 0x2F2D9Cu;
        goto label_2f2d9c;
    }
    ctx->pc = 0x2F2D94u;
    {
        const bool branch_taken_0x2f2d94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2F2D98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 434));
        if (branch_taken_0x2f2d94) {
            ctx->pc = 0x2F2D28u;
            goto label_2f2d28;
        }
    }
    ctx->pc = 0x2F2D9Cu;
label_2f2d9c:
    // 0x2f2d9c: 0x1065ffe0
label_2f2da0:
    if (ctx->pc == 0x2F2DA0u) {
        ctx->pc = 0x2F2DA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2F2DA4u;
        goto label_2f2da4;
    }
    ctx->pc = 0x2F2D9Cu;
    {
        const bool branch_taken_0x2f2d9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F2DA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f2d9c) {
            ctx->pc = 0x2F2D20u;
            goto label_2f2d20;
        }
    }
    ctx->pc = 0x2F2DA4u;
label_2f2da4:
    // 0x2f2da4: 0xdfb00000
    ctx->pc = 0x2f2da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2da8:
    // 0x2f2da8: 0x3e00008
label_2f2dac:
    if (ctx->pc == 0x2F2DACu) {
        ctx->pc = 0x2F2DACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F2DB0u;
        goto label_fallthrough_0x2f2da8;
    }
    ctx->pc = 0x2F2DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2DACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2D00u: goto label_2f2d00;
            case 0x2F2D04u: goto label_2f2d04;
            case 0x2F2D08u: goto label_2f2d08;
            case 0x2F2D0Cu: goto label_2f2d0c;
            case 0x2F2D10u: goto label_2f2d10;
            case 0x2F2D14u: goto label_2f2d14;
            case 0x2F2D18u: goto label_2f2d18;
            case 0x2F2D1Cu: goto label_2f2d1c;
            case 0x2F2D20u: goto label_2f2d20;
            case 0x2F2D24u: goto label_2f2d24;
            case 0x2F2D28u: goto label_2f2d28;
            case 0x2F2D2Cu: goto label_2f2d2c;
            case 0x2F2D30u: goto label_2f2d30;
            case 0x2F2D34u: goto label_2f2d34;
            case 0x2F2D38u: goto label_2f2d38;
            case 0x2F2D3Cu: goto label_2f2d3c;
            case 0x2F2D40u: goto label_2f2d40;
            case 0x2F2D44u: goto label_2f2d44;
            case 0x2F2D48u: goto label_2f2d48;
            case 0x2F2D4Cu: goto label_2f2d4c;
            case 0x2F2D50u: goto label_2f2d50;
            case 0x2F2D54u: goto label_2f2d54;
            case 0x2F2D58u: goto label_2f2d58;
            case 0x2F2D5Cu: goto label_2f2d5c;
            case 0x2F2D60u: goto label_2f2d60;
            case 0x2F2D64u: goto label_2f2d64;
            case 0x2F2D68u: goto label_2f2d68;
            case 0x2F2D6Cu: goto label_2f2d6c;
            case 0x2F2D70u: goto label_2f2d70;
            case 0x2F2D74u: goto label_2f2d74;
            case 0x2F2D78u: goto label_2f2d78;
            case 0x2F2D7Cu: goto label_2f2d7c;
            case 0x2F2D80u: goto label_2f2d80;
            case 0x2F2D84u: goto label_2f2d84;
            case 0x2F2D88u: goto label_2f2d88;
            case 0x2F2D8Cu: goto label_2f2d8c;
            case 0x2F2D90u: goto label_2f2d90;
            case 0x2F2D94u: goto label_2f2d94;
            case 0x2F2D98u: goto label_2f2d98;
            case 0x2F2D9Cu: goto label_2f2d9c;
            case 0x2F2DA0u: goto label_2f2da0;
            case 0x2F2DA4u: goto label_2f2da4;
            case 0x2F2DA8u: goto label_2f2da8;
            case 0x2F2DACu: goto label_2f2dac;
            default: break;
        }
        return;
    }
label_fallthrough_0x2f2da8:
    ctx->pc = 0x2F2DB0u;
}
