#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsAddVolume
// Address: 0x175ad8 - 0x175bc0
void cvFsAddVolume_0x175ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsAddVolume");


    ctx->pc = 0x175ad8u;

label_175ad8:
    // 0x175ad8: 0x27bdffa0
    ctx->pc = 0x175ad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_175adc:
    // 0x175adc: 0xffb20040
    ctx->pc = 0x175adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_175ae0:
    // 0x175ae0: 0xffb10030
    ctx->pc = 0x175ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_175ae4:
    // 0x175ae4: 0xa0902d
    ctx->pc = 0x175ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175ae8:
    // 0x175ae8: 0xffbf0050
    ctx->pc = 0x175ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_175aec:
    // 0x175aec: 0xc0882d
    ctx->pc = 0x175aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_175af0:
    // 0x175af0: 0x14800006
label_175af4:
    if (ctx->pc == 0x175AF4u) {
        ctx->pc = 0x175AF4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->pc = 0x175AF8u;
        goto label_175af8;
    }
    ctx->pc = 0x175AF0u;
    {
        const bool branch_taken_0x175af0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175AF4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x175af0) {
            ctx->pc = 0x175B0Cu;
            goto label_175b0c;
        }
    }
    ctx->pc = 0x175AF8u;
label_175af8:
    // 0x175af8: 0x3c04002c
    ctx->pc = 0x175af8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175afc:
    // 0x175afc: 0xc05d076
label_175b00:
    if (ctx->pc == 0x175B00u) {
        ctx->pc = 0x175B00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946288));
        ctx->pc = 0x175B04u;
        goto label_175b04;
    }
    ctx->pc = 0x175AFCu;
    SET_GPR_U32(ctx, 31, 0x175B04u);
    ctx->pc = 0x175B00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946288));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B04u; }
        else if (ctx->pc != 0x175B04u) { ctx->pc = 0x175B04u; }
    }
    if (ctx->pc != 0x175B04u) { return; }
    ctx->pc = 0x175B04u;
label_175b04:
    // 0x175b04: 0x10000028
label_175b08:
    if (ctx->pc == 0x175B08u) {
        ctx->pc = 0x175B08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175B0Cu;
        goto label_175b0c;
    }
    ctx->pc = 0x175B04u;
    {
        const bool branch_taken_0x175b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175B08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175b04) {
            ctx->pc = 0x175BA8u;
            goto label_175ba8;
        }
    }
    ctx->pc = 0x175B0Cu;
label_175b0c:
    // 0x175b0c: 0x16400006
label_175b10:
    if (ctx->pc == 0x175B10u) {
        ctx->pc = 0x175B14u;
        goto label_175b14;
    }
    ctx->pc = 0x175B0Cu;
    {
        const bool branch_taken_0x175b0c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x175b0c) {
            ctx->pc = 0x175B28u;
            goto label_175b28;
        }
    }
    ctx->pc = 0x175B14u;
label_175b14:
    // 0x175b14: 0x3c04002c
    ctx->pc = 0x175b14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175b18:
    // 0x175b18: 0xc05d076
label_175b1c:
    if (ctx->pc == 0x175B1Cu) {
        ctx->pc = 0x175B1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946328));
        ctx->pc = 0x175B20u;
        goto label_175b20;
    }
    ctx->pc = 0x175B18u;
    SET_GPR_U32(ctx, 31, 0x175B20u);
    ctx->pc = 0x175B1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946328));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B20u; }
        else if (ctx->pc != 0x175B20u) { ctx->pc = 0x175B20u; }
    }
    if (ctx->pc != 0x175B20u) { return; }
    ctx->pc = 0x175B20u;
label_175b20:
    // 0x175b20: 0x10000021
label_175b24:
    if (ctx->pc == 0x175B24u) {
        ctx->pc = 0x175B24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175B28u;
        goto label_175b28;
    }
    ctx->pc = 0x175B20u;
    {
        const bool branch_taken_0x175b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175B24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175b20) {
            ctx->pc = 0x175BA8u;
            goto label_175ba8;
        }
    }
    ctx->pc = 0x175B28u;
label_175b28:
    // 0x175b28: 0x16200006
label_175b2c:
    if (ctx->pc == 0x175B2Cu) {
        ctx->pc = 0x175B30u;
        goto label_175b30;
    }
    ctx->pc = 0x175B28u;
    {
        const bool branch_taken_0x175b28 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x175b28) {
            ctx->pc = 0x175B44u;
            goto label_175b44;
        }
    }
    ctx->pc = 0x175B30u;
label_175b30:
    // 0x175b30: 0x3c04002c
    ctx->pc = 0x175b30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175b34:
    // 0x175b34: 0xc05d076
label_175b38:
    if (ctx->pc == 0x175B38u) {
        ctx->pc = 0x175B38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946368));
        ctx->pc = 0x175B3Cu;
        goto label_175b3c;
    }
    ctx->pc = 0x175B34u;
    SET_GPR_U32(ctx, 31, 0x175B3Cu);
    ctx->pc = 0x175B38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946368));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B3Cu; }
        else if (ctx->pc != 0x175B3Cu) { ctx->pc = 0x175B3Cu; }
    }
    if (ctx->pc != 0x175B3Cu) { return; }
    ctx->pc = 0x175B3Cu;
label_175b3c:
    // 0x175b3c: 0x1000001a
label_175b40:
    if (ctx->pc == 0x175B40u) {
        ctx->pc = 0x175B40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175B44u;
        goto label_175b44;
    }
    ctx->pc = 0x175B3Cu;
    {
        const bool branch_taken_0x175b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175B40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175b3c) {
            ctx->pc = 0x175BA8u;
            goto label_175ba8;
        }
    }
    ctx->pc = 0x175B44u;
label_175b44:
    // 0x175b44: 0xc05d142
label_175b48:
    if (ctx->pc == 0x175B48u) {
        ctx->pc = 0x175B4Cu;
        goto label_175b4c;
    }
    ctx->pc = 0x175B44u;
    SET_GPR_U32(ctx, 31, 0x175B4Cu);
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B4Cu; }
        else if (ctx->pc != 0x175B4Cu) { ctx->pc = 0x175B4Cu; }
    }
    if (ctx->pc != 0x175B4Cu) { return; }
    ctx->pc = 0x175B4Cu;
label_175b4c:
    // 0x175b4c: 0x40802d
    ctx->pc = 0x175b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175b50:
    // 0x175b50: 0x16000006
label_175b54:
    if (ctx->pc == 0x175B54u) {
        ctx->pc = 0x175B54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175B58u;
        goto label_175b58;
    }
    ctx->pc = 0x175B50u;
    {
        const bool branch_taken_0x175b50 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175B54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175b50) {
            ctx->pc = 0x175B6Cu;
            goto label_175b6c;
        }
    }
    ctx->pc = 0x175B58u;
label_175b58:
    // 0x175b58: 0x3c04002c
    ctx->pc = 0x175b58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175b5c:
    // 0x175b5c: 0xc05d076
label_175b60:
    if (ctx->pc == 0x175B60u) {
        ctx->pc = 0x175B60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946408));
        ctx->pc = 0x175B64u;
        goto label_175b64;
    }
    ctx->pc = 0x175B5Cu;
    SET_GPR_U32(ctx, 31, 0x175B64u);
    ctx->pc = 0x175B60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946408));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B64u; }
        else if (ctx->pc != 0x175B64u) { ctx->pc = 0x175B64u; }
    }
    if (ctx->pc != 0x175B64u) { return; }
    ctx->pc = 0x175B64u;
label_175b64:
    // 0x175b64: 0x10000010
label_175b68:
    if (ctx->pc == 0x175B68u) {
        ctx->pc = 0x175B68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175B6Cu;
        goto label_175b6c;
    }
    ctx->pc = 0x175B64u;
    {
        const bool branch_taken_0x175b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175B68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x175b64) {
            ctx->pc = 0x175BA8u;
            goto label_175ba8;
        }
    }
    ctx->pc = 0x175B6Cu;
label_175b6c:
    // 0x175b6c: 0x282d
    ctx->pc = 0x175b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175b70:
    // 0x175b70: 0xc050cfe
label_175b74:
    if (ctx->pc == 0x175B74u) {
        ctx->pc = 0x175B74u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x175B78u;
        goto label_175b78;
    }
    ctx->pc = 0x175B70u;
    SET_GPR_U32(ctx, 31, 0x175B78u);
    ctx->pc = 0x175B74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B78u; }
        else if (ctx->pc != 0x175B78u) { ctx->pc = 0x175B78u; }
    }
    if (ctx->pc != 0x175B78u) { return; }
    ctx->pc = 0x175B78u;
label_175b78:
    // 0x175b78: 0x8e020060
    ctx->pc = 0x175b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_175b7c:
    // 0x175b7c: 0xafb10000
    ctx->pc = 0x175b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_175b80:
    // 0x175b80: 0x10400008
label_175b84:
    if (ctx->pc == 0x175B84u) {
        ctx->pc = 0x175B84u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
        ctx->pc = 0x175B88u;
        goto label_175b88;
    }
    ctx->pc = 0x175B80u;
    {
        const bool branch_taken_0x175b80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175B84u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
        if (branch_taken_0x175b80) {
            ctx->pc = 0x175BA4u;
            goto label_175ba4;
        }
    }
    ctx->pc = 0x175B88u;
label_175b88:
    // 0x175b88: 0x3a0202d
    ctx->pc = 0x175b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175b8c:
    // 0x175b8c: 0x24050002
    ctx->pc = 0x175b8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_175b90:
    // 0x175b90: 0x302d
    ctx->pc = 0x175b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175b94:
    // 0x175b94: 0x40f809
label_175b98:
    if (ctx->pc == 0x175B98u) {
        ctx->pc = 0x175B98u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175B9Cu;
        goto label_175b9c;
    }
    ctx->pc = 0x175B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175B9Cu);
        ctx->pc = 0x175B98u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175AD8u: goto label_175ad8;
            case 0x175ADCu: goto label_175adc;
            case 0x175AE0u: goto label_175ae0;
            case 0x175AE4u: goto label_175ae4;
            case 0x175AE8u: goto label_175ae8;
            case 0x175AECu: goto label_175aec;
            case 0x175AF0u: goto label_175af0;
            case 0x175AF4u: goto label_175af4;
            case 0x175AF8u: goto label_175af8;
            case 0x175AFCu: goto label_175afc;
            case 0x175B00u: goto label_175b00;
            case 0x175B04u: goto label_175b04;
            case 0x175B08u: goto label_175b08;
            case 0x175B0Cu: goto label_175b0c;
            case 0x175B10u: goto label_175b10;
            case 0x175B14u: goto label_175b14;
            case 0x175B18u: goto label_175b18;
            case 0x175B1Cu: goto label_175b1c;
            case 0x175B20u: goto label_175b20;
            case 0x175B24u: goto label_175b24;
            case 0x175B28u: goto label_175b28;
            case 0x175B2Cu: goto label_175b2c;
            case 0x175B30u: goto label_175b30;
            case 0x175B34u: goto label_175b34;
            case 0x175B38u: goto label_175b38;
            case 0x175B3Cu: goto label_175b3c;
            case 0x175B40u: goto label_175b40;
            case 0x175B44u: goto label_175b44;
            case 0x175B48u: goto label_175b48;
            case 0x175B4Cu: goto label_175b4c;
            case 0x175B50u: goto label_175b50;
            case 0x175B54u: goto label_175b54;
            case 0x175B58u: goto label_175b58;
            case 0x175B5Cu: goto label_175b5c;
            case 0x175B60u: goto label_175b60;
            case 0x175B64u: goto label_175b64;
            case 0x175B68u: goto label_175b68;
            case 0x175B6Cu: goto label_175b6c;
            case 0x175B70u: goto label_175b70;
            case 0x175B74u: goto label_175b74;
            case 0x175B78u: goto label_175b78;
            case 0x175B7Cu: goto label_175b7c;
            case 0x175B80u: goto label_175b80;
            case 0x175B84u: goto label_175b84;
            case 0x175B88u: goto label_175b88;
            case 0x175B8Cu: goto label_175b8c;
            case 0x175B90u: goto label_175b90;
            case 0x175B94u: goto label_175b94;
            case 0x175B98u: goto label_175b98;
            case 0x175B9Cu: goto label_175b9c;
            case 0x175BA0u: goto label_175ba0;
            case 0x175BA4u: goto label_175ba4;
            case 0x175BA8u: goto label_175ba8;
            case 0x175BACu: goto label_175bac;
            case 0x175BB0u: goto label_175bb0;
            case 0x175BB4u: goto label_175bb4;
            case 0x175BB8u: goto label_175bb8;
            case 0x175BBCu: goto label_175bbc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175B9Cu; }
            if (ctx->pc != 0x175B9Cu) { return; }
        }
    }
    ctx->pc = 0x175B9Cu;
label_175b9c:
    // 0x175b9c: 0x10000003
label_175ba0:
    if (ctx->pc == 0x175BA0u) {
        ctx->pc = 0x175BA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x175BA4u;
        goto label_175ba4;
    }
    ctx->pc = 0x175B9Cu;
    {
        const bool branch_taken_0x175b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175BA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x175b9c) {
            ctx->pc = 0x175BACu;
            goto label_175bac;
        }
    }
    ctx->pc = 0x175BA4u;
label_175ba4:
    // 0x175ba4: 0x2402ffff
    ctx->pc = 0x175ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_175ba8:
    // 0x175ba8: 0xdfbf0050
    ctx->pc = 0x175ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_175bac:
    // 0x175bac: 0xdfb20040
    ctx->pc = 0x175bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_175bb0:
    // 0x175bb0: 0xdfb10030
    ctx->pc = 0x175bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_175bb4:
    // 0x175bb4: 0xdfb00020
    ctx->pc = 0x175bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175bb8:
    // 0x175bb8: 0x3e00008
label_175bbc:
    if (ctx->pc == 0x175BBCu) {
        ctx->pc = 0x175BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x175BC0u;
        goto label_fallthrough_0x175bb8;
    }
    ctx->pc = 0x175BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175AD8u: goto label_175ad8;
            case 0x175ADCu: goto label_175adc;
            case 0x175AE0u: goto label_175ae0;
            case 0x175AE4u: goto label_175ae4;
            case 0x175AE8u: goto label_175ae8;
            case 0x175AECu: goto label_175aec;
            case 0x175AF0u: goto label_175af0;
            case 0x175AF4u: goto label_175af4;
            case 0x175AF8u: goto label_175af8;
            case 0x175AFCu: goto label_175afc;
            case 0x175B00u: goto label_175b00;
            case 0x175B04u: goto label_175b04;
            case 0x175B08u: goto label_175b08;
            case 0x175B0Cu: goto label_175b0c;
            case 0x175B10u: goto label_175b10;
            case 0x175B14u: goto label_175b14;
            case 0x175B18u: goto label_175b18;
            case 0x175B1Cu: goto label_175b1c;
            case 0x175B20u: goto label_175b20;
            case 0x175B24u: goto label_175b24;
            case 0x175B28u: goto label_175b28;
            case 0x175B2Cu: goto label_175b2c;
            case 0x175B30u: goto label_175b30;
            case 0x175B34u: goto label_175b34;
            case 0x175B38u: goto label_175b38;
            case 0x175B3Cu: goto label_175b3c;
            case 0x175B40u: goto label_175b40;
            case 0x175B44u: goto label_175b44;
            case 0x175B48u: goto label_175b48;
            case 0x175B4Cu: goto label_175b4c;
            case 0x175B50u: goto label_175b50;
            case 0x175B54u: goto label_175b54;
            case 0x175B58u: goto label_175b58;
            case 0x175B5Cu: goto label_175b5c;
            case 0x175B60u: goto label_175b60;
            case 0x175B64u: goto label_175b64;
            case 0x175B68u: goto label_175b68;
            case 0x175B6Cu: goto label_175b6c;
            case 0x175B70u: goto label_175b70;
            case 0x175B74u: goto label_175b74;
            case 0x175B78u: goto label_175b78;
            case 0x175B7Cu: goto label_175b7c;
            case 0x175B80u: goto label_175b80;
            case 0x175B84u: goto label_175b84;
            case 0x175B88u: goto label_175b88;
            case 0x175B8Cu: goto label_175b8c;
            case 0x175B90u: goto label_175b90;
            case 0x175B94u: goto label_175b94;
            case 0x175B98u: goto label_175b98;
            case 0x175B9Cu: goto label_175b9c;
            case 0x175BA0u: goto label_175ba0;
            case 0x175BA4u: goto label_175ba4;
            case 0x175BA8u: goto label_175ba8;
            case 0x175BACu: goto label_175bac;
            case 0x175BB0u: goto label_175bb0;
            case 0x175BB4u: goto label_175bb4;
            case 0x175BB8u: goto label_175bb8;
            case 0x175BBCu: goto label_175bbc;
            default: break;
        }
        return;
    }
label_fallthrough_0x175bb8:
    ctx->pc = 0x175BC0u;
}
