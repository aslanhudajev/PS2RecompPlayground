#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsDelVolume
// Address: 0x175bc0 - 0x175c7c
void cvFsDelVolume_0x175bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsDelVolume");


    ctx->pc = 0x175bc0u;

label_175bc0:
    // 0x175bc0: 0x27bdffb0
    ctx->pc = 0x175bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_175bc4:
    // 0x175bc4: 0xffb10030
    ctx->pc = 0x175bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_175bc8:
    // 0x175bc8: 0xffbf0040
    ctx->pc = 0x175bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_175bcc:
    // 0x175bcc: 0xa0882d
    ctx->pc = 0x175bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175bd0:
    // 0x175bd0: 0x14800006
label_175bd4:
    if (ctx->pc == 0x175BD4u) {
        ctx->pc = 0x175BD4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->pc = 0x175BD8u;
        goto label_175bd8;
    }
    ctx->pc = 0x175BD0u;
    {
        const bool branch_taken_0x175bd0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175BD4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x175bd0) {
            ctx->pc = 0x175BECu;
            goto label_175bec;
        }
    }
    ctx->pc = 0x175BD8u;
label_175bd8:
    // 0x175bd8: 0x3c04002c
    ctx->pc = 0x175bd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175bdc:
    // 0x175bdc: 0xc05d076
label_175be0:
    if (ctx->pc == 0x175BE0u) {
        ctx->pc = 0x175BE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946448));
        ctx->pc = 0x175BE4u;
        goto label_175be4;
    }
    ctx->pc = 0x175BDCu;
    SET_GPR_U32(ctx, 31, 0x175BE4u);
    ctx->pc = 0x175BE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946448));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BE4u; }
        else if (ctx->pc != 0x175BE4u) { ctx->pc = 0x175BE4u; }
    }
    if (ctx->pc != 0x175BE4u) { return; }
    ctx->pc = 0x175BE4u;
label_175be4:
    // 0x175be4: 0x10000020
label_175be8:
    if (ctx->pc == 0x175BE8u) {
        ctx->pc = 0x175BE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175BECu;
        goto label_175bec;
    }
    ctx->pc = 0x175BE4u;
    {
        const bool branch_taken_0x175be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175BE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175be4) {
            ctx->pc = 0x175C68u;
            goto label_175c68;
        }
    }
    ctx->pc = 0x175BECu;
label_175bec:
    // 0x175bec: 0x16200006
label_175bf0:
    if (ctx->pc == 0x175BF0u) {
        ctx->pc = 0x175BF4u;
        goto label_175bf4;
    }
    ctx->pc = 0x175BECu;
    {
        const bool branch_taken_0x175bec = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x175bec) {
            ctx->pc = 0x175C08u;
            goto label_175c08;
        }
    }
    ctx->pc = 0x175BF4u;
label_175bf4:
    // 0x175bf4: 0x3c04002c
    ctx->pc = 0x175bf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175bf8:
    // 0x175bf8: 0xc05d076
label_175bfc:
    if (ctx->pc == 0x175BFCu) {
        ctx->pc = 0x175BFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946488));
        ctx->pc = 0x175C00u;
        goto label_175c00;
    }
    ctx->pc = 0x175BF8u;
    SET_GPR_U32(ctx, 31, 0x175C00u);
    ctx->pc = 0x175BFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946488));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C00u; }
        else if (ctx->pc != 0x175C00u) { ctx->pc = 0x175C00u; }
    }
    if (ctx->pc != 0x175C00u) { return; }
    ctx->pc = 0x175C00u;
label_175c00:
    // 0x175c00: 0x10000019
label_175c04:
    if (ctx->pc == 0x175C04u) {
        ctx->pc = 0x175C04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175C08u;
        goto label_175c08;
    }
    ctx->pc = 0x175C00u;
    {
        const bool branch_taken_0x175c00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175C04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175c00) {
            ctx->pc = 0x175C68u;
            goto label_175c68;
        }
    }
    ctx->pc = 0x175C08u;
label_175c08:
    // 0x175c08: 0xc05d142
label_175c0c:
    if (ctx->pc == 0x175C0Cu) {
        ctx->pc = 0x175C10u;
        goto label_175c10;
    }
    ctx->pc = 0x175C08u;
    SET_GPR_U32(ctx, 31, 0x175C10u);
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C10u; }
        else if (ctx->pc != 0x175C10u) { ctx->pc = 0x175C10u; }
    }
    if (ctx->pc != 0x175C10u) { return; }
    ctx->pc = 0x175C10u;
label_175c10:
    // 0x175c10: 0x40802d
    ctx->pc = 0x175c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175c14:
    // 0x175c14: 0x16000006
label_175c18:
    if (ctx->pc == 0x175C18u) {
        ctx->pc = 0x175C18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175C1Cu;
        goto label_175c1c;
    }
    ctx->pc = 0x175C14u;
    {
        const bool branch_taken_0x175c14 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175C18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175c14) {
            ctx->pc = 0x175C30u;
            goto label_175c30;
        }
    }
    ctx->pc = 0x175C1Cu;
label_175c1c:
    // 0x175c1c: 0x3c04002c
    ctx->pc = 0x175c1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175c20:
    // 0x175c20: 0xc05d076
label_175c24:
    if (ctx->pc == 0x175C24u) {
        ctx->pc = 0x175C24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946528));
        ctx->pc = 0x175C28u;
        goto label_175c28;
    }
    ctx->pc = 0x175C20u;
    SET_GPR_U32(ctx, 31, 0x175C28u);
    ctx->pc = 0x175C24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946528));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C28u; }
        else if (ctx->pc != 0x175C28u) { ctx->pc = 0x175C28u; }
    }
    if (ctx->pc != 0x175C28u) { return; }
    ctx->pc = 0x175C28u;
label_175c28:
    // 0x175c28: 0x1000000f
label_175c2c:
    if (ctx->pc == 0x175C2Cu) {
        ctx->pc = 0x175C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175C30u;
        goto label_175c30;
    }
    ctx->pc = 0x175C28u;
    {
        const bool branch_taken_0x175c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175c28) {
            ctx->pc = 0x175C68u;
            goto label_175c68;
        }
    }
    ctx->pc = 0x175C30u;
label_175c30:
    // 0x175c30: 0x282d
    ctx->pc = 0x175c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175c34:
    // 0x175c34: 0xc050cfe
label_175c38:
    if (ctx->pc == 0x175C38u) {
        ctx->pc = 0x175C38u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x175C3Cu;
        goto label_175c3c;
    }
    ctx->pc = 0x175C34u;
    SET_GPR_U32(ctx, 31, 0x175C3Cu);
    ctx->pc = 0x175C38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C3Cu; }
        else if (ctx->pc != 0x175C3Cu) { ctx->pc = 0x175C3Cu; }
    }
    if (ctx->pc != 0x175C3Cu) { return; }
    ctx->pc = 0x175C3Cu;
label_175c3c:
    // 0x175c3c: 0x8e020060
    ctx->pc = 0x175c3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_175c40:
    // 0x175c40: 0x10400008
label_175c44:
    if (ctx->pc == 0x175C44u) {
        ctx->pc = 0x175C44u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->pc = 0x175C48u;
        goto label_175c48;
    }
    ctx->pc = 0x175C40u;
    {
        const bool branch_taken_0x175c40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175C44u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        if (branch_taken_0x175c40) {
            ctx->pc = 0x175C64u;
            goto label_175c64;
        }
    }
    ctx->pc = 0x175C48u;
label_175c48:
    // 0x175c48: 0x3a0202d
    ctx->pc = 0x175c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175c4c:
    // 0x175c4c: 0x24050003
    ctx->pc = 0x175c4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_175c50:
    // 0x175c50: 0x302d
    ctx->pc = 0x175c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175c54:
    // 0x175c54: 0x40f809
label_175c58:
    if (ctx->pc == 0x175C58u) {
        ctx->pc = 0x175C58u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175C5Cu;
        goto label_175c5c;
    }
    ctx->pc = 0x175C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175C5Cu);
        ctx->pc = 0x175C58u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175BC0u: goto label_175bc0;
            case 0x175BC4u: goto label_175bc4;
            case 0x175BC8u: goto label_175bc8;
            case 0x175BCCu: goto label_175bcc;
            case 0x175BD0u: goto label_175bd0;
            case 0x175BD4u: goto label_175bd4;
            case 0x175BD8u: goto label_175bd8;
            case 0x175BDCu: goto label_175bdc;
            case 0x175BE0u: goto label_175be0;
            case 0x175BE4u: goto label_175be4;
            case 0x175BE8u: goto label_175be8;
            case 0x175BECu: goto label_175bec;
            case 0x175BF0u: goto label_175bf0;
            case 0x175BF4u: goto label_175bf4;
            case 0x175BF8u: goto label_175bf8;
            case 0x175BFCu: goto label_175bfc;
            case 0x175C00u: goto label_175c00;
            case 0x175C04u: goto label_175c04;
            case 0x175C08u: goto label_175c08;
            case 0x175C0Cu: goto label_175c0c;
            case 0x175C10u: goto label_175c10;
            case 0x175C14u: goto label_175c14;
            case 0x175C18u: goto label_175c18;
            case 0x175C1Cu: goto label_175c1c;
            case 0x175C20u: goto label_175c20;
            case 0x175C24u: goto label_175c24;
            case 0x175C28u: goto label_175c28;
            case 0x175C2Cu: goto label_175c2c;
            case 0x175C30u: goto label_175c30;
            case 0x175C34u: goto label_175c34;
            case 0x175C38u: goto label_175c38;
            case 0x175C3Cu: goto label_175c3c;
            case 0x175C40u: goto label_175c40;
            case 0x175C44u: goto label_175c44;
            case 0x175C48u: goto label_175c48;
            case 0x175C4Cu: goto label_175c4c;
            case 0x175C50u: goto label_175c50;
            case 0x175C54u: goto label_175c54;
            case 0x175C58u: goto label_175c58;
            case 0x175C5Cu: goto label_175c5c;
            case 0x175C60u: goto label_175c60;
            case 0x175C64u: goto label_175c64;
            case 0x175C68u: goto label_175c68;
            case 0x175C6Cu: goto label_175c6c;
            case 0x175C70u: goto label_175c70;
            case 0x175C74u: goto label_175c74;
            case 0x175C78u: goto label_175c78;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175C5Cu; }
            if (ctx->pc != 0x175C5Cu) { return; }
        }
    }
    ctx->pc = 0x175C5Cu;
label_175c5c:
    // 0x175c5c: 0x10000003
label_175c60:
    if (ctx->pc == 0x175C60u) {
        ctx->pc = 0x175C60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x175C64u;
        goto label_175c64;
    }
    ctx->pc = 0x175C5Cu;
    {
        const bool branch_taken_0x175c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175C60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x175c5c) {
            ctx->pc = 0x175C6Cu;
            goto label_175c6c;
        }
    }
    ctx->pc = 0x175C64u;
label_175c64:
    // 0x175c64: 0x2402ffff
    ctx->pc = 0x175c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_175c68:
    // 0x175c68: 0xdfbf0040
    ctx->pc = 0x175c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175c6c:
    // 0x175c6c: 0xdfb10030
    ctx->pc = 0x175c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_175c70:
    // 0x175c70: 0xdfb00020
    ctx->pc = 0x175c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175c74:
    // 0x175c74: 0x3e00008
label_175c78:
    if (ctx->pc == 0x175C78u) {
        ctx->pc = 0x175C78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x175C7Cu;
        goto label_fallthrough_0x175c74;
    }
    ctx->pc = 0x175C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175BC0u: goto label_175bc0;
            case 0x175BC4u: goto label_175bc4;
            case 0x175BC8u: goto label_175bc8;
            case 0x175BCCu: goto label_175bcc;
            case 0x175BD0u: goto label_175bd0;
            case 0x175BD4u: goto label_175bd4;
            case 0x175BD8u: goto label_175bd8;
            case 0x175BDCu: goto label_175bdc;
            case 0x175BE0u: goto label_175be0;
            case 0x175BE4u: goto label_175be4;
            case 0x175BE8u: goto label_175be8;
            case 0x175BECu: goto label_175bec;
            case 0x175BF0u: goto label_175bf0;
            case 0x175BF4u: goto label_175bf4;
            case 0x175BF8u: goto label_175bf8;
            case 0x175BFCu: goto label_175bfc;
            case 0x175C00u: goto label_175c00;
            case 0x175C04u: goto label_175c04;
            case 0x175C08u: goto label_175c08;
            case 0x175C0Cu: goto label_175c0c;
            case 0x175C10u: goto label_175c10;
            case 0x175C14u: goto label_175c14;
            case 0x175C18u: goto label_175c18;
            case 0x175C1Cu: goto label_175c1c;
            case 0x175C20u: goto label_175c20;
            case 0x175C24u: goto label_175c24;
            case 0x175C28u: goto label_175c28;
            case 0x175C2Cu: goto label_175c2c;
            case 0x175C30u: goto label_175c30;
            case 0x175C34u: goto label_175c34;
            case 0x175C38u: goto label_175c38;
            case 0x175C3Cu: goto label_175c3c;
            case 0x175C40u: goto label_175c40;
            case 0x175C44u: goto label_175c44;
            case 0x175C48u: goto label_175c48;
            case 0x175C4Cu: goto label_175c4c;
            case 0x175C50u: goto label_175c50;
            case 0x175C54u: goto label_175c54;
            case 0x175C58u: goto label_175c58;
            case 0x175C5Cu: goto label_175c5c;
            case 0x175C60u: goto label_175c60;
            case 0x175C64u: goto label_175c64;
            case 0x175C68u: goto label_175c68;
            case 0x175C6Cu: goto label_175c6c;
            case 0x175C70u: goto label_175c70;
            case 0x175C74u: goto label_175c74;
            case 0x175C78u: goto label_175c78;
            default: break;
        }
        return;
    }
label_fallthrough_0x175c74:
    ctx->pc = 0x175C7Cu;
}
