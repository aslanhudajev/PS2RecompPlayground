#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _extensionAndUserData
// Address: 0x161b88 - 0x161c38
void _extensionAndUserData_0x161b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_extensionAndUserData");


    ctx->pc = 0x161b88u;

label_161b88:
    // 0x161b88: 0x27bdffe0
    ctx->pc = 0x161b88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_161b8c:
    // 0x161b8c: 0xffb00000
    ctx->pc = 0x161b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_161b90:
    // 0x161b90: 0xffbf0010
    ctx->pc = 0x161b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_161b94:
    // 0x161b94: 0xc05862e
label_161b98:
    if (ctx->pc == 0x161B98u) {
        ctx->pc = 0x161B98u;
        SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
        ctx->pc = 0x161B9Cu;
        goto label_161b9c;
    }
    ctx->pc = 0x161B94u;
    SET_GPR_U32(ctx, 31, 0x161B9Cu);
    ctx->pc = 0x161B98u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x1618B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1618b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B9Cu; }
        else if (ctx->pc != 0x161B9Cu) { ctx->pc = 0x161B9Cu; }
    }
    if (ctx->pc != 0x161B9Cu) { return; }
    ctx->pc = 0x161B9Cu;
label_161b9c:
    // 0x161b9c: 0x10000019
label_161ba0:
    if (ctx->pc == 0x161BA0u) {
        ctx->pc = 0x161BA4u;
        goto label_161ba4;
    }
    ctx->pc = 0x161B9Cu;
    {
        const bool branch_taken_0x161b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x161b9c) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161BA4u;
label_161ba4:
    // 0x161ba4: 0x0
    ctx->pc = 0x161ba4u;
    // NOP
label_161ba8:
    // 0x161ba8: 0x14660012
label_161bac:
    if (ctx->pc == 0x161BACu) {
        ctx->pc = 0x161BB0u;
        goto label_161bb0;
    }
    ctx->pc = 0x161BA8u;
    {
        const bool branch_taken_0x161ba8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x161ba8) {
            ctx->pc = 0x161BF4u;
            goto label_161bf4;
        }
    }
    ctx->pc = 0x161BB0u;
label_161bb0:
    // 0x161bb0: 0xc05858e
label_161bb4:
    if (ctx->pc == 0x161BB4u) {
        ctx->pc = 0x161BB8u;
        goto label_161bb8;
    }
    ctx->pc = 0x161BB0u;
    SET_GPR_U32(ctx, 31, 0x161BB8u);
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BB8u; }
        else if (ctx->pc != 0x161BB8u) { ctx->pc = 0x161BB8u; }
    }
    if (ctx->pc != 0x161BB8u) { return; }
    ctx->pc = 0x161BB8u;
label_161bb8:
    // 0x161bb8: 0xc0585d4
label_161bbc:
    if (ctx->pc == 0x161BBCu) {
        ctx->pc = 0x161BBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x161BC0u;
        goto label_161bc0;
    }
    ctx->pc = 0x161BB8u;
    SET_GPR_U32(ctx, 31, 0x161BC0u);
    ctx->pc = 0x161BBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BC0u; }
        else if (ctx->pc != 0x161BC0u) { ctx->pc = 0x161BC0u; }
    }
    if (ctx->pc != 0x161BC0u) { return; }
    ctx->pc = 0x161BC0u;
label_161bc0:
    // 0x161bc0: 0x2403000a
    ctx->pc = 0x161bc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_161bc4:
    // 0x161bc4: 0x2604a180
    ctx->pc = 0x161bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294943104));
label_161bc8:
    // 0x161bc8: 0x62182b
    ctx->pc = 0x161bc8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_161bcc:
    // 0x161bcc: 0x3100b
    ctx->pc = 0x161bccu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_161bd0:
    // 0x161bd0: 0x21080
    ctx->pc = 0x161bd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_161bd4:
    // 0x161bd4: 0x441021
    ctx->pc = 0x161bd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_161bd8:
    // 0x161bd8: 0x8c430000
    ctx->pc = 0x161bd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_161bdc:
    // 0x161bdc: 0x60f809
label_161be0:
    if (ctx->pc == 0x161BE0u) {
        ctx->pc = 0x161BE4u;
        goto label_161be4;
    }
    ctx->pc = 0x161BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161BE4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161BE4u; }
            if (ctx->pc != 0x161BE4u) { return; }
        }
    }
    ctx->pc = 0x161BE4u;
label_161be4:
    // 0x161be4: 0xc05862e
label_161be8:
    if (ctx->pc == 0x161BE8u) {
        ctx->pc = 0x161BECu;
        goto label_161bec;
    }
    ctx->pc = 0x161BE4u;
    SET_GPR_U32(ctx, 31, 0x161BECu);
    ctx->pc = 0x1618B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1618b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BECu; }
        else if (ctx->pc != 0x161BECu) { ctx->pc = 0x161BECu; }
    }
    if (ctx->pc != 0x161BECu) { return; }
    ctx->pc = 0x161BECu;
label_161bec:
    // 0x161bec: 0x10000005
label_161bf0:
    if (ctx->pc == 0x161BF0u) {
        ctx->pc = 0x161BF4u;
        goto label_161bf4;
    }
    ctx->pc = 0x161BECu;
    {
        const bool branch_taken_0x161bec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x161bec) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161BF4u;
label_161bf4:
    // 0x161bf4: 0xc05858e
label_161bf8:
    if (ctx->pc == 0x161BF8u) {
        ctx->pc = 0x161BF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x161BFCu;
        goto label_161bfc;
    }
    ctx->pc = 0x161BF4u;
    SET_GPR_U32(ctx, 31, 0x161BFCu);
    ctx->pc = 0x161BF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BFCu; }
        else if (ctx->pc != 0x161BFCu) { ctx->pc = 0x161BFCu; }
    }
    if (ctx->pc != 0x161BFCu) { return; }
    ctx->pc = 0x161BFCu;
label_161bfc:
    // 0x161bfc: 0xc05862e
label_161c00:
    if (ctx->pc == 0x161C00u) {
        ctx->pc = 0x161C04u;
        goto label_161c04;
    }
    ctx->pc = 0x161BFCu;
    SET_GPR_U32(ctx, 31, 0x161C04u);
    ctx->pc = 0x1618B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1618b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C04u; }
        else if (ctx->pc != 0x161C04u) { ctx->pc = 0x161C04u; }
    }
    if (ctx->pc != 0x161C04u) { return; }
    ctx->pc = 0x161C04u;
label_161c04:
    // 0x161c04: 0xc058540
label_161c08:
    if (ctx->pc == 0x161C08u) {
        ctx->pc = 0x161C08u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x161C0Cu;
        goto label_161c0c;
    }
    ctx->pc = 0x161C04u;
    SET_GPR_U32(ctx, 31, 0x161C0Cu);
    ctx->pc = 0x161C08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x161500u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x161500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C0Cu; }
        else if (ctx->pc != 0x161C0Cu) { ctx->pc = 0x161C0Cu; }
    }
    if (ctx->pc != 0x161C0Cu) { return; }
    ctx->pc = 0x161C0Cu;
label_161c0c:
    // 0x161c0c: 0x40182d
    ctx->pc = 0x161c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161c10:
    // 0x161c10: 0x24040020
    ctx->pc = 0x161c10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
label_161c14:
    // 0x161c14: 0x240201b5
    ctx->pc = 0x161c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 437));
label_161c18:
    // 0x161c18: 0x240601b5
    ctx->pc = 0x161c18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 437));
label_161c1c:
    // 0x161c1c: 0x1062ffe4
label_161c20:
    if (ctx->pc == 0x161C20u) {
        ctx->pc = 0x161C20u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 434));
        ctx->pc = 0x161C24u;
        goto label_161c24;
    }
    ctx->pc = 0x161C1Cu;
    {
        const bool branch_taken_0x161c1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x161C20u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 434));
        if (branch_taken_0x161c1c) {
            ctx->pc = 0x161BB0u;
            goto label_161bb0;
        }
    }
    ctx->pc = 0x161C24u;
label_161c24:
    // 0x161c24: 0x1065ffe0
label_161c28:
    if (ctx->pc == 0x161C28u) {
        ctx->pc = 0x161C28u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x161C2Cu;
        goto label_161c2c;
    }
    ctx->pc = 0x161C24u;
    {
        const bool branch_taken_0x161c24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x161C28u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x161c24) {
            ctx->pc = 0x161BA8u;
            goto label_161ba8;
        }
    }
    ctx->pc = 0x161C2Cu;
label_161c2c:
    // 0x161c2c: 0xdfb00000
    ctx->pc = 0x161c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161c30:
    // 0x161c30: 0x3e00008
label_161c34:
    if (ctx->pc == 0x161C34u) {
        ctx->pc = 0x161C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x161C38u;
        goto label_fallthrough_0x161c30;
    }
    ctx->pc = 0x161C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            default: break;
        }
        return;
    }
label_fallthrough_0x161c30:
    ctx->pc = 0x161C38u;
}
