#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterColItem
// Address: 0x259e48 - 0x259fa4
void CritterColItem_0x259e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x259e48u;

label_259e48:
    // 0x259e48: 0x27bdffd0
    ctx->pc = 0x259e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_259e4c:
    // 0x259e4c: 0xffbf0020
    ctx->pc = 0x259e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_259e50:
    // 0x259e50: 0xffb10010
    ctx->pc = 0x259e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_259e54:
    // 0x259e54: 0xffb00000
    ctx->pc = 0x259e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_259e58:
    // 0x259e58: 0xa0882d
    ctx->pc = 0x259e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259e5c:
    // 0x259e5c: 0x8e230000
    ctx->pc = 0x259e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259e60:
    // 0x259e60: 0x24660004
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4));
label_259e64:
    // 0x259e64: 0x8c820004
    ctx->pc = 0x259e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_259e68:
    // 0x259e68: 0x8c420120
    ctx->pc = 0x259e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_259e6c:
    // 0x259e6c: 0x84500020
    ctx->pc = 0x259e6cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_259e70:
    // 0x259e70: 0x8c620000
    ctx->pc = 0x259e70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259e74:
    // 0x259e74: 0x2443ffff
    ctx->pc = 0x259e74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_259e78:
    // 0x259e78: 0x2c62000c
    ctx->pc = 0x259e78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
label_259e7c:
    // 0x259e7c: 0x10400043
label_259e80:
    if (ctx->pc == 0x259E80u) {
        ctx->pc = 0x259E80u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259E84u;
        goto label_259e84;
    }
    ctx->pc = 0x259E7Cu;
    {
        const bool branch_taken_0x259e7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259E80u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259e7c) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259E84u;
label_259e84:
    // 0x259e84: 0x3c02003b
    ctx->pc = 0x259e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_259e88:
    // 0x259e88: 0x24428da0
    ctx->pc = 0x259e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938016));
label_259e8c:
    // 0x259e8c: 0x31880
    ctx->pc = 0x259e8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_259e90:
    // 0x259e90: 0x621821
    ctx->pc = 0x259e90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259e94:
    // 0x259e94: 0x8c620000
    ctx->pc = 0x259e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259e98:
    // 0x259e98: 0x400008
label_259e9c:
    if (ctx->pc == 0x259E9Cu) {
        ctx->pc = 0x259EA0u;
        goto label_259ea0;
    }
    ctx->pc = 0x259E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259E48u: goto label_259e48;
            case 0x259E4Cu: goto label_259e4c;
            case 0x259E50u: goto label_259e50;
            case 0x259E54u: goto label_259e54;
            case 0x259E58u: goto label_259e58;
            case 0x259E5Cu: goto label_259e5c;
            case 0x259E60u: goto label_259e60;
            case 0x259E64u: goto label_259e64;
            case 0x259E68u: goto label_259e68;
            case 0x259E6Cu: goto label_259e6c;
            case 0x259E70u: goto label_259e70;
            case 0x259E74u: goto label_259e74;
            case 0x259E78u: goto label_259e78;
            case 0x259E7Cu: goto label_259e7c;
            case 0x259E80u: goto label_259e80;
            case 0x259E84u: goto label_259e84;
            case 0x259E88u: goto label_259e88;
            case 0x259E8Cu: goto label_259e8c;
            case 0x259E90u: goto label_259e90;
            case 0x259E94u: goto label_259e94;
            case 0x259E98u: goto label_259e98;
            case 0x259E9Cu: goto label_259e9c;
            case 0x259EA0u: goto label_259ea0;
            case 0x259EA4u: goto label_259ea4;
            case 0x259EA8u: goto label_259ea8;
            case 0x259EACu: goto label_259eac;
            case 0x259EB0u: goto label_259eb0;
            case 0x259EB4u: goto label_259eb4;
            case 0x259EB8u: goto label_259eb8;
            case 0x259EBCu: goto label_259ebc;
            case 0x259EC0u: goto label_259ec0;
            case 0x259EC4u: goto label_259ec4;
            case 0x259EC8u: goto label_259ec8;
            case 0x259ECCu: goto label_259ecc;
            case 0x259ED0u: goto label_259ed0;
            case 0x259ED4u: goto label_259ed4;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EDCu: goto label_259edc;
            case 0x259EE0u: goto label_259ee0;
            case 0x259EE4u: goto label_259ee4;
            case 0x259EE8u: goto label_259ee8;
            case 0x259EECu: goto label_259eec;
            case 0x259EF0u: goto label_259ef0;
            case 0x259EF4u: goto label_259ef4;
            case 0x259EF8u: goto label_259ef8;
            case 0x259EFCu: goto label_259efc;
            case 0x259F00u: goto label_259f00;
            case 0x259F04u: goto label_259f04;
            case 0x259F08u: goto label_259f08;
            case 0x259F0Cu: goto label_259f0c;
            case 0x259F10u: goto label_259f10;
            case 0x259F14u: goto label_259f14;
            case 0x259F18u: goto label_259f18;
            case 0x259F1Cu: goto label_259f1c;
            case 0x259F20u: goto label_259f20;
            case 0x259F24u: goto label_259f24;
            case 0x259F28u: goto label_259f28;
            case 0x259F2Cu: goto label_259f2c;
            case 0x259F30u: goto label_259f30;
            case 0x259F34u: goto label_259f34;
            case 0x259F38u: goto label_259f38;
            case 0x259F3Cu: goto label_259f3c;
            case 0x259F40u: goto label_259f40;
            case 0x259F44u: goto label_259f44;
            case 0x259F48u: goto label_259f48;
            case 0x259F4Cu: goto label_259f4c;
            case 0x259F50u: goto label_259f50;
            case 0x259F54u: goto label_259f54;
            case 0x259F58u: goto label_259f58;
            case 0x259F5Cu: goto label_259f5c;
            case 0x259F60u: goto label_259f60;
            case 0x259F64u: goto label_259f64;
            case 0x259F68u: goto label_259f68;
            case 0x259F6Cu: goto label_259f6c;
            case 0x259F70u: goto label_259f70;
            case 0x259F74u: goto label_259f74;
            case 0x259F78u: goto label_259f78;
            case 0x259F7Cu: goto label_259f7c;
            case 0x259F80u: goto label_259f80;
            case 0x259F84u: goto label_259f84;
            case 0x259F88u: goto label_259f88;
            case 0x259F8Cu: goto label_259f8c;
            case 0x259F90u: goto label_259f90;
            case 0x259F94u: goto label_259f94;
            case 0x259F98u: goto label_259f98;
            case 0x259F9Cu: goto label_259f9c;
            case 0x259FA0u: goto label_259fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259EA0u;
label_259ea0:
    // 0x259ea0: 0x8cc20000
    ctx->pc = 0x259ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259ea4:
    // 0x259ea4: 0x2443ffd8
    ctx->pc = 0x259ea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967256));
label_259ea8:
    // 0x259ea8: 0x2c62000e
    ctx->pc = 0x259ea8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_259eac:
    // 0x259eac: 0x10400011
label_259eb0:
    if (ctx->pc == 0x259EB0u) {
        ctx->pc = 0x259EB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x259EB4u;
        goto label_259eb4;
    }
    ctx->pc = 0x259EACu;
    {
        const bool branch_taken_0x259eac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259EB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x259eac) {
            ctx->pc = 0x259EF4u;
            goto label_259ef4;
        }
    }
    ctx->pc = 0x259EB4u;
label_259eb4:
    // 0x259eb4: 0x24428dd0
    ctx->pc = 0x259eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938064));
label_259eb8:
    // 0x259eb8: 0x31880
    ctx->pc = 0x259eb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_259ebc:
    // 0x259ebc: 0x621821
    ctx->pc = 0x259ebcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259ec0:
    // 0x259ec0: 0x8c620000
    ctx->pc = 0x259ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259ec4:
    // 0x259ec4: 0x400008
label_259ec8:
    if (ctx->pc == 0x259EC8u) {
        ctx->pc = 0x259ECCu;
        goto label_259ecc;
    }
    ctx->pc = 0x259EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259E48u: goto label_259e48;
            case 0x259E4Cu: goto label_259e4c;
            case 0x259E50u: goto label_259e50;
            case 0x259E54u: goto label_259e54;
            case 0x259E58u: goto label_259e58;
            case 0x259E5Cu: goto label_259e5c;
            case 0x259E60u: goto label_259e60;
            case 0x259E64u: goto label_259e64;
            case 0x259E68u: goto label_259e68;
            case 0x259E6Cu: goto label_259e6c;
            case 0x259E70u: goto label_259e70;
            case 0x259E74u: goto label_259e74;
            case 0x259E78u: goto label_259e78;
            case 0x259E7Cu: goto label_259e7c;
            case 0x259E80u: goto label_259e80;
            case 0x259E84u: goto label_259e84;
            case 0x259E88u: goto label_259e88;
            case 0x259E8Cu: goto label_259e8c;
            case 0x259E90u: goto label_259e90;
            case 0x259E94u: goto label_259e94;
            case 0x259E98u: goto label_259e98;
            case 0x259E9Cu: goto label_259e9c;
            case 0x259EA0u: goto label_259ea0;
            case 0x259EA4u: goto label_259ea4;
            case 0x259EA8u: goto label_259ea8;
            case 0x259EACu: goto label_259eac;
            case 0x259EB0u: goto label_259eb0;
            case 0x259EB4u: goto label_259eb4;
            case 0x259EB8u: goto label_259eb8;
            case 0x259EBCu: goto label_259ebc;
            case 0x259EC0u: goto label_259ec0;
            case 0x259EC4u: goto label_259ec4;
            case 0x259EC8u: goto label_259ec8;
            case 0x259ECCu: goto label_259ecc;
            case 0x259ED0u: goto label_259ed0;
            case 0x259ED4u: goto label_259ed4;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EDCu: goto label_259edc;
            case 0x259EE0u: goto label_259ee0;
            case 0x259EE4u: goto label_259ee4;
            case 0x259EE8u: goto label_259ee8;
            case 0x259EECu: goto label_259eec;
            case 0x259EF0u: goto label_259ef0;
            case 0x259EF4u: goto label_259ef4;
            case 0x259EF8u: goto label_259ef8;
            case 0x259EFCu: goto label_259efc;
            case 0x259F00u: goto label_259f00;
            case 0x259F04u: goto label_259f04;
            case 0x259F08u: goto label_259f08;
            case 0x259F0Cu: goto label_259f0c;
            case 0x259F10u: goto label_259f10;
            case 0x259F14u: goto label_259f14;
            case 0x259F18u: goto label_259f18;
            case 0x259F1Cu: goto label_259f1c;
            case 0x259F20u: goto label_259f20;
            case 0x259F24u: goto label_259f24;
            case 0x259F28u: goto label_259f28;
            case 0x259F2Cu: goto label_259f2c;
            case 0x259F30u: goto label_259f30;
            case 0x259F34u: goto label_259f34;
            case 0x259F38u: goto label_259f38;
            case 0x259F3Cu: goto label_259f3c;
            case 0x259F40u: goto label_259f40;
            case 0x259F44u: goto label_259f44;
            case 0x259F48u: goto label_259f48;
            case 0x259F4Cu: goto label_259f4c;
            case 0x259F50u: goto label_259f50;
            case 0x259F54u: goto label_259f54;
            case 0x259F58u: goto label_259f58;
            case 0x259F5Cu: goto label_259f5c;
            case 0x259F60u: goto label_259f60;
            case 0x259F64u: goto label_259f64;
            case 0x259F68u: goto label_259f68;
            case 0x259F6Cu: goto label_259f6c;
            case 0x259F70u: goto label_259f70;
            case 0x259F74u: goto label_259f74;
            case 0x259F78u: goto label_259f78;
            case 0x259F7Cu: goto label_259f7c;
            case 0x259F80u: goto label_259f80;
            case 0x259F84u: goto label_259f84;
            case 0x259F88u: goto label_259f88;
            case 0x259F8Cu: goto label_259f8c;
            case 0x259F90u: goto label_259f90;
            case 0x259F94u: goto label_259f94;
            case 0x259F98u: goto label_259f98;
            case 0x259F9Cu: goto label_259f9c;
            case 0x259FA0u: goto label_259fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259ECCu;
label_259ecc:
    // 0x259ecc: 0x862200f2
    ctx->pc = 0x259eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_259ed0:
    // 0x259ed0: 0x24030001
    ctx->pc = 0x259ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_259ed4:
    // 0x259ed4: 0x28420001
    ctx->pc = 0x259ed4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
label_259ed8:
    // 0x259ed8: 0x1000002c
label_259edc:
    if (ctx->pc == 0x259EDCu) {
        ctx->pc = 0x259EDCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x259EE0u;
        goto label_259ee0;
    }
    ctx->pc = 0x259ED8u;
    {
        const bool branch_taken_0x259ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259EDCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x259ed8) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259EE0u;
label_259ee0:
    // 0x259ee0: 0x24020003
    ctx->pc = 0x259ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_259ee4:
    // 0x259ee4: 0x12020026
label_259ee8:
    if (ctx->pc == 0x259EE8u) {
        ctx->pc = 0x259EE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x259EECu;
        goto label_259eec;
    }
    ctx->pc = 0x259EE4u;
    {
        const bool branch_taken_0x259ee4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x259EE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x259ee4) {
            ctx->pc = 0x259F80u;
            goto label_259f80;
        }
    }
    ctx->pc = 0x259EECu;
label_259eec:
    // 0x259eec: 0x12020027
label_259ef0:
    if (ctx->pc == 0x259EF0u) {
        ctx->pc = 0x259EF0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x259EF4u;
        goto label_259ef4;
    }
    ctx->pc = 0x259EECu;
    {
        const bool branch_taken_0x259eec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x259EF0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x259eec) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259EF4u;
label_259ef4:
    // 0x259ef4: 0x10000025
label_259ef8:
    if (ctx->pc == 0x259EF8u) {
        ctx->pc = 0x259EF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259EFCu;
        goto label_259efc;
    }
    ctx->pc = 0x259EF4u;
    {
        const bool branch_taken_0x259ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259EF8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259ef4) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259EFCu;
label_259efc:
    // 0x259efc: 0x8cc30000
    ctx->pc = 0x259efcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_259f00:
    // 0x259f00: 0x2402002b
    ctx->pc = 0x259f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_259f04:
    // 0x259f04: 0x14620008
label_259f08:
    if (ctx->pc == 0x259F08u) {
        ctx->pc = 0x259F08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259F0Cu;
        goto label_259f0c;
    }
    ctx->pc = 0x259F04u;
    {
        const bool branch_taken_0x259f04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x259F08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259f04) {
            ctx->pc = 0x259F28u;
            goto label_259f28;
        }
    }
    ctx->pc = 0x259F0Cu;
label_259f0c:
    // 0x259f0c: 0x24020003
    ctx->pc = 0x259f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_259f10:
    // 0x259f10: 0x1202001b
label_259f14:
    if (ctx->pc == 0x259F14u) {
        ctx->pc = 0x259F14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x259F18u;
        goto label_259f18;
    }
    ctx->pc = 0x259F10u;
    {
        const bool branch_taken_0x259f10 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x259F14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x259f10) {
            ctx->pc = 0x259F80u;
            goto label_259f80;
        }
    }
    ctx->pc = 0x259F18u;
label_259f18:
    // 0x259f18: 0x1602001d
label_259f1c:
    if (ctx->pc == 0x259F1Cu) {
        ctx->pc = 0x259F1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259F20u;
        goto label_259f20;
    }
    ctx->pc = 0x259F18u;
    {
        const bool branch_taken_0x259f18 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x259F1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259f18) {
            ctx->pc = 0x259F90u;
            goto label_259f90;
        }
    }
    ctx->pc = 0x259F20u;
label_259f20:
    // 0x259f20: 0x1000001a
label_259f24:
    if (ctx->pc == 0x259F24u) {
        ctx->pc = 0x259F24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x259F28u;
        goto label_259f28;
    }
    ctx->pc = 0x259F20u;
    {
        const bool branch_taken_0x259f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259F24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x259f20) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259F28u;
label_259f28:
    // 0x259f28: 0x24020003
    ctx->pc = 0x259f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_259f2c:
    // 0x259f2c: 0x12020003
label_259f30:
    if (ctx->pc == 0x259F30u) {
        ctx->pc = 0x259F30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x259F34u;
        goto label_259f34;
    }
    ctx->pc = 0x259F2Cu;
    {
        const bool branch_taken_0x259f2c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x259F30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x259f2c) {
            ctx->pc = 0x259F3Cu;
            goto label_259f3c;
        }
    }
    ctx->pc = 0x259F34u;
label_259f34:
    // 0x259f34: 0x16020016
label_259f38:
    if (ctx->pc == 0x259F38u) {
        ctx->pc = 0x259F38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259F3Cu;
        goto label_259f3c;
    }
    ctx->pc = 0x259F34u;
    {
        const bool branch_taken_0x259f34 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x259F38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259f34) {
            ctx->pc = 0x259F90u;
            goto label_259f90;
        }
    }
    ctx->pc = 0x259F3Cu;
label_259f3c:
    // 0x259f3c: 0x10000013
label_259f40:
    if (ctx->pc == 0x259F40u) {
        ctx->pc = 0x259F40u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x259F44u;
        goto label_259f44;
    }
    ctx->pc = 0x259F3Cu;
    {
        const bool branch_taken_0x259f3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259F40u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x259f3c) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259F44u;
label_259f44:
    // 0x259f44: 0xc096176
label_259f48:
    if (ctx->pc == 0x259F48u) {
        ctx->pc = 0x259F48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259F4Cu;
        goto label_259f4c;
    }
    ctx->pc = 0x259F44u;
    SET_GPR_U32(ctx, 31, 0x259F4Cu);
    ctx->pc = 0x259F48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2585D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlatGenerator_0x2585d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259F4Cu; }
    }
    if (ctx->pc != 0x259F4Cu) { return; }
    ctx->pc = 0x259F4Cu;
label_259f4c:
    // 0x259f4c: 0x2c450001
    ctx->pc = 0x259f4cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 2), 1));
label_259f50:
    // 0x259f50: 0x8e220000
    ctx->pc = 0x259f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259f54:
    // 0x259f54: 0xc4410010
    ctx->pc = 0x259f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259f58:
    // 0x259f58: 0x3c014040
    ctx->pc = 0x259f58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_259f5c:
    // 0x259f5c: 0x44810000
    ctx->pc = 0x259f5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_259f60:
    // 0x259f60: 0x46000836
    ctx->pc = 0x259f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259f64:
    // 0x259f64: 0x0
    ctx->pc = 0x259f64u;
    // NOP
label_259f68:
    // 0x259f68: 0x45000008
label_259f6c:
    if (ctx->pc == 0x259F6Cu) {
        ctx->pc = 0x259F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x259F70u;
        goto label_259f70;
    }
    ctx->pc = 0x259F68u;
    {
        const bool branch_taken_0x259f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x259f68) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259F70u;
label_259f70:
    // 0x259f70: 0x12020003
label_259f74:
    if (ctx->pc == 0x259F74u) {
        ctx->pc = 0x259F74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x259F78u;
        goto label_259f78;
    }
    ctx->pc = 0x259F70u;
    {
        const bool branch_taken_0x259f70 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x259F74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x259f70) {
            ctx->pc = 0x259F80u;
            goto label_259f80;
        }
    }
    ctx->pc = 0x259F78u;
label_259f78:
    // 0x259f78: 0x16020004
label_259f7c:
    if (ctx->pc == 0x259F7Cu) {
        ctx->pc = 0x259F7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259F80u;
        goto label_259f80;
    }
    ctx->pc = 0x259F78u;
    {
        const bool branch_taken_0x259f78 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x259F7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x259f78) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259F80u;
label_259f80:
    // 0x259f80: 0x10000002
label_259f84:
    if (ctx->pc == 0x259F84u) {
        ctx->pc = 0x259F84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x259F88u;
        goto label_259f88;
    }
    ctx->pc = 0x259F80u;
    {
        const bool branch_taken_0x259f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259F84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x259f80) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259F88u;
label_259f88:
    // 0x259f88: 0x282d
    ctx->pc = 0x259f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259f8c:
    // 0x259f8c: 0xa0102d
    ctx->pc = 0x259f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259f90:
    // 0x259f90: 0xdfbf0020
    ctx->pc = 0x259f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_259f94:
    // 0x259f94: 0xdfb10010
    ctx->pc = 0x259f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_259f98:
    // 0x259f98: 0xdfb00000
    ctx->pc = 0x259f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_259f9c:
    // 0x259f9c: 0x3e00008
label_259fa0:
    if (ctx->pc == 0x259FA0u) {
        ctx->pc = 0x259FA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x259FA4u;
        goto label_fallthrough_0x259f9c;
    }
    ctx->pc = 0x259F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259FA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259E48u: goto label_259e48;
            case 0x259E4Cu: goto label_259e4c;
            case 0x259E50u: goto label_259e50;
            case 0x259E54u: goto label_259e54;
            case 0x259E58u: goto label_259e58;
            case 0x259E5Cu: goto label_259e5c;
            case 0x259E60u: goto label_259e60;
            case 0x259E64u: goto label_259e64;
            case 0x259E68u: goto label_259e68;
            case 0x259E6Cu: goto label_259e6c;
            case 0x259E70u: goto label_259e70;
            case 0x259E74u: goto label_259e74;
            case 0x259E78u: goto label_259e78;
            case 0x259E7Cu: goto label_259e7c;
            case 0x259E80u: goto label_259e80;
            case 0x259E84u: goto label_259e84;
            case 0x259E88u: goto label_259e88;
            case 0x259E8Cu: goto label_259e8c;
            case 0x259E90u: goto label_259e90;
            case 0x259E94u: goto label_259e94;
            case 0x259E98u: goto label_259e98;
            case 0x259E9Cu: goto label_259e9c;
            case 0x259EA0u: goto label_259ea0;
            case 0x259EA4u: goto label_259ea4;
            case 0x259EA8u: goto label_259ea8;
            case 0x259EACu: goto label_259eac;
            case 0x259EB0u: goto label_259eb0;
            case 0x259EB4u: goto label_259eb4;
            case 0x259EB8u: goto label_259eb8;
            case 0x259EBCu: goto label_259ebc;
            case 0x259EC0u: goto label_259ec0;
            case 0x259EC4u: goto label_259ec4;
            case 0x259EC8u: goto label_259ec8;
            case 0x259ECCu: goto label_259ecc;
            case 0x259ED0u: goto label_259ed0;
            case 0x259ED4u: goto label_259ed4;
            case 0x259ED8u: goto label_259ed8;
            case 0x259EDCu: goto label_259edc;
            case 0x259EE0u: goto label_259ee0;
            case 0x259EE4u: goto label_259ee4;
            case 0x259EE8u: goto label_259ee8;
            case 0x259EECu: goto label_259eec;
            case 0x259EF0u: goto label_259ef0;
            case 0x259EF4u: goto label_259ef4;
            case 0x259EF8u: goto label_259ef8;
            case 0x259EFCu: goto label_259efc;
            case 0x259F00u: goto label_259f00;
            case 0x259F04u: goto label_259f04;
            case 0x259F08u: goto label_259f08;
            case 0x259F0Cu: goto label_259f0c;
            case 0x259F10u: goto label_259f10;
            case 0x259F14u: goto label_259f14;
            case 0x259F18u: goto label_259f18;
            case 0x259F1Cu: goto label_259f1c;
            case 0x259F20u: goto label_259f20;
            case 0x259F24u: goto label_259f24;
            case 0x259F28u: goto label_259f28;
            case 0x259F2Cu: goto label_259f2c;
            case 0x259F30u: goto label_259f30;
            case 0x259F34u: goto label_259f34;
            case 0x259F38u: goto label_259f38;
            case 0x259F3Cu: goto label_259f3c;
            case 0x259F40u: goto label_259f40;
            case 0x259F44u: goto label_259f44;
            case 0x259F48u: goto label_259f48;
            case 0x259F4Cu: goto label_259f4c;
            case 0x259F50u: goto label_259f50;
            case 0x259F54u: goto label_259f54;
            case 0x259F58u: goto label_259f58;
            case 0x259F5Cu: goto label_259f5c;
            case 0x259F60u: goto label_259f60;
            case 0x259F64u: goto label_259f64;
            case 0x259F68u: goto label_259f68;
            case 0x259F6Cu: goto label_259f6c;
            case 0x259F70u: goto label_259f70;
            case 0x259F74u: goto label_259f74;
            case 0x259F78u: goto label_259f78;
            case 0x259F7Cu: goto label_259f7c;
            case 0x259F80u: goto label_259f80;
            case 0x259F84u: goto label_259f84;
            case 0x259F88u: goto label_259f88;
            case 0x259F8Cu: goto label_259f8c;
            case 0x259F90u: goto label_259f90;
            case 0x259F94u: goto label_259f94;
            case 0x259F98u: goto label_259f98;
            case 0x259F9Cu: goto label_259f9c;
            case 0x259FA0u: goto label_259fa0;
            default: break;
        }
        return;
    }
label_fallthrough_0x259f9c:
    ctx->pc = 0x259FA4u;
}
