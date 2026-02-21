#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLegendItem
// Address: 0x260e08 - 0x260f68
void AudioLegendItem_0x260e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260e08u;

label_260e08:
    // 0x260e08: 0x27bdffd0
    ctx->pc = 0x260e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_260e0c:
    // 0x260e0c: 0xffbf0020
    ctx->pc = 0x260e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_260e10:
    // 0x260e10: 0xffb10010
    ctx->pc = 0x260e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_260e14:
    // 0x260e14: 0xffb00000
    ctx->pc = 0x260e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_260e18:
    // 0x260e18: 0x3c020034
    ctx->pc = 0x260e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_260e1c:
    // 0x260e1c: 0x8c42e7f0
    ctx->pc = 0x260e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_260e20:
    // 0x260e20: 0x2450ffff
    ctx->pc = 0x260e20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_260e24:
    // 0x260e24: 0x2c820005
    ctx->pc = 0x260e24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 5));
label_260e28:
    // 0x260e28: 0x1040004a
label_260e2c:
    if (ctx->pc == 0x260E2Cu) {
        ctx->pc = 0x260E2Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260E30u;
        goto label_260e30;
    }
    ctx->pc = 0x260E28u;
    {
        const bool branch_taken_0x260e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260E2Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260e28) {
            ctx->pc = 0x260F54u;
            goto label_260f54;
        }
    }
    ctx->pc = 0x260E30u;
label_260e30:
    // 0x260e30: 0x3c02003b
    ctx->pc = 0x260e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_260e34:
    // 0x260e34: 0x24429660
    ctx->pc = 0x260e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940256));
label_260e38:
    // 0x260e38: 0x41880
    ctx->pc = 0x260e38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_260e3c:
    // 0x260e3c: 0x621821
    ctx->pc = 0x260e3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_260e40:
    // 0x260e40: 0x8c620000
    ctx->pc = 0x260e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_260e44:
    // 0x260e44: 0x400008
label_260e48:
    if (ctx->pc == 0x260E48u) {
        ctx->pc = 0x260E4Cu;
        goto label_260e4c;
    }
    ctx->pc = 0x260E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260E08u: goto label_260e08;
            case 0x260E0Cu: goto label_260e0c;
            case 0x260E10u: goto label_260e10;
            case 0x260E14u: goto label_260e14;
            case 0x260E18u: goto label_260e18;
            case 0x260E1Cu: goto label_260e1c;
            case 0x260E20u: goto label_260e20;
            case 0x260E24u: goto label_260e24;
            case 0x260E28u: goto label_260e28;
            case 0x260E2Cu: goto label_260e2c;
            case 0x260E30u: goto label_260e30;
            case 0x260E34u: goto label_260e34;
            case 0x260E38u: goto label_260e38;
            case 0x260E3Cu: goto label_260e3c;
            case 0x260E40u: goto label_260e40;
            case 0x260E44u: goto label_260e44;
            case 0x260E48u: goto label_260e48;
            case 0x260E4Cu: goto label_260e4c;
            case 0x260E50u: goto label_260e50;
            case 0x260E54u: goto label_260e54;
            case 0x260E58u: goto label_260e58;
            case 0x260E5Cu: goto label_260e5c;
            case 0x260E60u: goto label_260e60;
            case 0x260E64u: goto label_260e64;
            case 0x260E68u: goto label_260e68;
            case 0x260E6Cu: goto label_260e6c;
            case 0x260E70u: goto label_260e70;
            case 0x260E74u: goto label_260e74;
            case 0x260E78u: goto label_260e78;
            case 0x260E7Cu: goto label_260e7c;
            case 0x260E80u: goto label_260e80;
            case 0x260E84u: goto label_260e84;
            case 0x260E88u: goto label_260e88;
            case 0x260E8Cu: goto label_260e8c;
            case 0x260E90u: goto label_260e90;
            case 0x260E94u: goto label_260e94;
            case 0x260E98u: goto label_260e98;
            case 0x260E9Cu: goto label_260e9c;
            case 0x260EA0u: goto label_260ea0;
            case 0x260EA4u: goto label_260ea4;
            case 0x260EA8u: goto label_260ea8;
            case 0x260EACu: goto label_260eac;
            case 0x260EB0u: goto label_260eb0;
            case 0x260EB4u: goto label_260eb4;
            case 0x260EB8u: goto label_260eb8;
            case 0x260EBCu: goto label_260ebc;
            case 0x260EC0u: goto label_260ec0;
            case 0x260EC4u: goto label_260ec4;
            case 0x260EC8u: goto label_260ec8;
            case 0x260ECCu: goto label_260ecc;
            case 0x260ED0u: goto label_260ed0;
            case 0x260ED4u: goto label_260ed4;
            case 0x260ED8u: goto label_260ed8;
            case 0x260EDCu: goto label_260edc;
            case 0x260EE0u: goto label_260ee0;
            case 0x260EE4u: goto label_260ee4;
            case 0x260EE8u: goto label_260ee8;
            case 0x260EECu: goto label_260eec;
            case 0x260EF0u: goto label_260ef0;
            case 0x260EF4u: goto label_260ef4;
            case 0x260EF8u: goto label_260ef8;
            case 0x260EFCu: goto label_260efc;
            case 0x260F00u: goto label_260f00;
            case 0x260F04u: goto label_260f04;
            case 0x260F08u: goto label_260f08;
            case 0x260F0Cu: goto label_260f0c;
            case 0x260F10u: goto label_260f10;
            case 0x260F14u: goto label_260f14;
            case 0x260F18u: goto label_260f18;
            case 0x260F1Cu: goto label_260f1c;
            case 0x260F20u: goto label_260f20;
            case 0x260F24u: goto label_260f24;
            case 0x260F28u: goto label_260f28;
            case 0x260F2Cu: goto label_260f2c;
            case 0x260F30u: goto label_260f30;
            case 0x260F34u: goto label_260f34;
            case 0x260F38u: goto label_260f38;
            case 0x260F3Cu: goto label_260f3c;
            case 0x260F40u: goto label_260f40;
            case 0x260F44u: goto label_260f44;
            case 0x260F48u: goto label_260f48;
            case 0x260F4Cu: goto label_260f4c;
            case 0x260F50u: goto label_260f50;
            case 0x260F54u: goto label_260f54;
            case 0x260F58u: goto label_260f58;
            case 0x260F5Cu: goto label_260f5c;
            case 0x260F60u: goto label_260f60;
            case 0x260F64u: goto label_260f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260E4Cu;
label_260e4c:
    // 0x260e4c: 0x24040064
    ctx->pc = 0x260e4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 100));
label_260e50:
    // 0x260e50: 0x220282d
    ctx->pc = 0x260e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260e54:
    // 0x260e54: 0x240600e0
    ctx->pc = 0x260e54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
label_260e58:
    // 0x260e58: 0x2407000a
    ctx->pc = 0x260e58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_260e5c:
    // 0x260e5c: 0xdfbf0020
    ctx->pc = 0x260e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260e60:
    // 0x260e60: 0xdfb10010
    ctx->pc = 0x260e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260e64:
    // 0x260e64: 0xdfb00000
    ctx->pc = 0x260e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260e68:
    // 0x260e68: 0x8088a26
label_260e6c:
    if (ctx->pc == 0x260E6Cu) {
        ctx->pc = 0x260E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x260E70u;
        goto label_260e70;
    }
    ctx->pc = 0x260E68u;
    ctx->pc = 0x260E6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260E70u;
label_260e70:
    // 0x260e70: 0x3c030034
    ctx->pc = 0x260e70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_260e74:
    // 0x260e74: 0x2463e078
    ctx->pc = 0x260e74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959224));
label_260e78:
    // 0x260e78: 0x101080
    ctx->pc = 0x260e78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_260e7c:
    // 0x260e7c: 0x431021
    ctx->pc = 0x260e7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_260e80:
    // 0x260e80: 0x8c440000
    ctx->pc = 0x260e80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260e84:
    // 0x260e84: 0x220282d
    ctx->pc = 0x260e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260e88:
    // 0x260e88: 0x240600e0
    ctx->pc = 0x260e88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
label_260e8c:
    // 0x260e8c: 0x2407000a
    ctx->pc = 0x260e8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_260e90:
    // 0x260e90: 0xdfbf0020
    ctx->pc = 0x260e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260e94:
    // 0x260e94: 0xdfb10010
    ctx->pc = 0x260e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260e98:
    // 0x260e98: 0xdfb00000
    ctx->pc = 0x260e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260e9c:
    // 0x260e9c: 0x8088a26
label_260ea0:
    if (ctx->pc == 0x260EA0u) {
        ctx->pc = 0x260EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x260EA4u;
        goto label_260ea4;
    }
    ctx->pc = 0x260E9Cu;
    ctx->pc = 0x260EA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260EA4u;
label_260ea4:
    // 0x260ea4: 0x3c030034
    ctx->pc = 0x260ea4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_260ea8:
    // 0x260ea8: 0x2463e0a8
    ctx->pc = 0x260ea8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959272));
label_260eac:
    // 0x260eac: 0x101080
    ctx->pc = 0x260eacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_260eb0:
    // 0x260eb0: 0x431021
    ctx->pc = 0x260eb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_260eb4:
    // 0x260eb4: 0x8c440000
    ctx->pc = 0x260eb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260eb8:
    // 0x260eb8: 0x220282d
    ctx->pc = 0x260eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260ebc:
    // 0x260ebc: 0x240600e0
    ctx->pc = 0x260ebcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
label_260ec0:
    // 0x260ec0: 0x2407000a
    ctx->pc = 0x260ec0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_260ec4:
    // 0x260ec4: 0xdfbf0020
    ctx->pc = 0x260ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260ec8:
    // 0x260ec8: 0xdfb10010
    ctx->pc = 0x260ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260ecc:
    // 0x260ecc: 0xdfb00000
    ctx->pc = 0x260eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260ed0:
    // 0x260ed0: 0x8088a26
label_260ed4:
    if (ctx->pc == 0x260ED4u) {
        ctx->pc = 0x260ED4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x260ED8u;
        goto label_260ed8;
    }
    ctx->pc = 0x260ED0u;
    ctx->pc = 0x260ED4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260ED8u;
label_260ed8:
    // 0x260ed8: 0x3c020034
    ctx->pc = 0x260ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_260edc:
    // 0x260edc: 0x2442e0a8
    ctx->pc = 0x260edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959272));
label_260ee0:
    // 0x260ee0: 0x108080
    ctx->pc = 0x260ee0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
label_260ee4:
    // 0x260ee4: 0x2021021
    ctx->pc = 0x260ee4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_260ee8:
    // 0x260ee8: 0xc08870e
label_260eec:
    if (ctx->pc == 0x260EECu) {
        ctx->pc = 0x260EECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x260EF0u;
        goto label_260ef0;
    }
    ctx->pc = 0x260EE8u;
    SET_GPR_U32(ctx, 31, 0x260EF0u);
    ctx->pc = 0x260EECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260EF0u; }
    }
    if (ctx->pc != 0x260EF0u) { return; }
    ctx->pc = 0x260EF0u;
label_260ef0:
    // 0x260ef0: 0x3c020034
    ctx->pc = 0x260ef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_260ef4:
    // 0x260ef4: 0x2442e0d8
    ctx->pc = 0x260ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959320));
label_260ef8:
    // 0x260ef8: 0x2028021
    ctx->pc = 0x260ef8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_260efc:
    // 0x260efc: 0x8e040000
    ctx->pc = 0x260efcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_260f00:
    // 0x260f00: 0x220282d
    ctx->pc = 0x260f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260f04:
    // 0x260f04: 0x240600e0
    ctx->pc = 0x260f04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
label_260f08:
    // 0x260f08: 0x2407000a
    ctx->pc = 0x260f08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_260f0c:
    // 0x260f0c: 0xdfbf0020
    ctx->pc = 0x260f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260f10:
    // 0x260f10: 0xdfb10010
    ctx->pc = 0x260f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260f14:
    // 0x260f14: 0xdfb00000
    ctx->pc = 0x260f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260f18:
    // 0x260f18: 0x8088a26
label_260f1c:
    if (ctx->pc == 0x260F1Cu) {
        ctx->pc = 0x260F1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x260F20u;
        goto label_260f20;
    }
    ctx->pc = 0x260F18u;
    ctx->pc = 0x260F1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260F20u;
label_260f20:
    // 0x260f20: 0x3c030034
    ctx->pc = 0x260f20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_260f24:
    // 0x260f24: 0x2463e108
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959368));
label_260f28:
    // 0x260f28: 0x101080
    ctx->pc = 0x260f28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_260f2c:
    // 0x260f2c: 0x431021
    ctx->pc = 0x260f2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_260f30:
    // 0x260f30: 0x8c440000
    ctx->pc = 0x260f30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260f34:
    // 0x260f34: 0x220282d
    ctx->pc = 0x260f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260f38:
    // 0x260f38: 0x240600e0
    ctx->pc = 0x260f38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
label_260f3c:
    // 0x260f3c: 0x2407000a
    ctx->pc = 0x260f3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_260f40:
    // 0x260f40: 0xdfbf0020
    ctx->pc = 0x260f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260f44:
    // 0x260f44: 0xdfb10010
    ctx->pc = 0x260f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260f48:
    // 0x260f48: 0xdfb00000
    ctx->pc = 0x260f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260f4c:
    // 0x260f4c: 0x8088a26
label_260f50:
    if (ctx->pc == 0x260F50u) {
        ctx->pc = 0x260F50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x260F54u;
        goto label_260f54;
    }
    ctx->pc = 0x260F4Cu;
    ctx->pc = 0x260F50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260F54u;
label_260f54:
    // 0x260f54: 0xdfbf0020
    ctx->pc = 0x260f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260f58:
    // 0x260f58: 0xdfb10010
    ctx->pc = 0x260f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260f5c:
    // 0x260f5c: 0xdfb00000
    ctx->pc = 0x260f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260f60:
    // 0x260f60: 0x3e00008
label_260f64:
    if (ctx->pc == 0x260F64u) {
        ctx->pc = 0x260F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x260F68u;
        goto label_fallthrough_0x260f60;
    }
    ctx->pc = 0x260F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260E08u: goto label_260e08;
            case 0x260E0Cu: goto label_260e0c;
            case 0x260E10u: goto label_260e10;
            case 0x260E14u: goto label_260e14;
            case 0x260E18u: goto label_260e18;
            case 0x260E1Cu: goto label_260e1c;
            case 0x260E20u: goto label_260e20;
            case 0x260E24u: goto label_260e24;
            case 0x260E28u: goto label_260e28;
            case 0x260E2Cu: goto label_260e2c;
            case 0x260E30u: goto label_260e30;
            case 0x260E34u: goto label_260e34;
            case 0x260E38u: goto label_260e38;
            case 0x260E3Cu: goto label_260e3c;
            case 0x260E40u: goto label_260e40;
            case 0x260E44u: goto label_260e44;
            case 0x260E48u: goto label_260e48;
            case 0x260E4Cu: goto label_260e4c;
            case 0x260E50u: goto label_260e50;
            case 0x260E54u: goto label_260e54;
            case 0x260E58u: goto label_260e58;
            case 0x260E5Cu: goto label_260e5c;
            case 0x260E60u: goto label_260e60;
            case 0x260E64u: goto label_260e64;
            case 0x260E68u: goto label_260e68;
            case 0x260E6Cu: goto label_260e6c;
            case 0x260E70u: goto label_260e70;
            case 0x260E74u: goto label_260e74;
            case 0x260E78u: goto label_260e78;
            case 0x260E7Cu: goto label_260e7c;
            case 0x260E80u: goto label_260e80;
            case 0x260E84u: goto label_260e84;
            case 0x260E88u: goto label_260e88;
            case 0x260E8Cu: goto label_260e8c;
            case 0x260E90u: goto label_260e90;
            case 0x260E94u: goto label_260e94;
            case 0x260E98u: goto label_260e98;
            case 0x260E9Cu: goto label_260e9c;
            case 0x260EA0u: goto label_260ea0;
            case 0x260EA4u: goto label_260ea4;
            case 0x260EA8u: goto label_260ea8;
            case 0x260EACu: goto label_260eac;
            case 0x260EB0u: goto label_260eb0;
            case 0x260EB4u: goto label_260eb4;
            case 0x260EB8u: goto label_260eb8;
            case 0x260EBCu: goto label_260ebc;
            case 0x260EC0u: goto label_260ec0;
            case 0x260EC4u: goto label_260ec4;
            case 0x260EC8u: goto label_260ec8;
            case 0x260ECCu: goto label_260ecc;
            case 0x260ED0u: goto label_260ed0;
            case 0x260ED4u: goto label_260ed4;
            case 0x260ED8u: goto label_260ed8;
            case 0x260EDCu: goto label_260edc;
            case 0x260EE0u: goto label_260ee0;
            case 0x260EE4u: goto label_260ee4;
            case 0x260EE8u: goto label_260ee8;
            case 0x260EECu: goto label_260eec;
            case 0x260EF0u: goto label_260ef0;
            case 0x260EF4u: goto label_260ef4;
            case 0x260EF8u: goto label_260ef8;
            case 0x260EFCu: goto label_260efc;
            case 0x260F00u: goto label_260f00;
            case 0x260F04u: goto label_260f04;
            case 0x260F08u: goto label_260f08;
            case 0x260F0Cu: goto label_260f0c;
            case 0x260F10u: goto label_260f10;
            case 0x260F14u: goto label_260f14;
            case 0x260F18u: goto label_260f18;
            case 0x260F1Cu: goto label_260f1c;
            case 0x260F20u: goto label_260f20;
            case 0x260F24u: goto label_260f24;
            case 0x260F28u: goto label_260f28;
            case 0x260F2Cu: goto label_260f2c;
            case 0x260F30u: goto label_260f30;
            case 0x260F34u: goto label_260f34;
            case 0x260F38u: goto label_260f38;
            case 0x260F3Cu: goto label_260f3c;
            case 0x260F40u: goto label_260f40;
            case 0x260F44u: goto label_260f44;
            case 0x260F48u: goto label_260f48;
            case 0x260F4Cu: goto label_260f4c;
            case 0x260F50u: goto label_260f50;
            case 0x260F54u: goto label_260f54;
            case 0x260F58u: goto label_260f58;
            case 0x260F5Cu: goto label_260f5c;
            case 0x260F60u: goto label_260f60;
            case 0x260F64u: goto label_260f64;
            default: break;
        }
        return;
    }
label_fallthrough_0x260f60:
    ctx->pc = 0x260F68u;
}
