#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterAddAnimInsts
// Address: 0x292aa8 - 0x292c0c
void CritterAddAnimInsts_0x292aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292aa8u;

    // 0x292aa8: 0x27bdffb0
    ctx->pc = 0x292aa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292aac: 0xffbf0040
    ctx->pc = 0x292aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x292ab0: 0xffb30030
    ctx->pc = 0x292ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x292ab4: 0xffb20020
    ctx->pc = 0x292ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x292ab8: 0xffb10010
    ctx->pc = 0x292ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x292abc: 0xffb00000
    ctx->pc = 0x292abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292ac0: 0x80902d
    ctx->pc = 0x292ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ac4: 0x8e420004
    ctx->pc = 0x292ac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x292ac8: 0x8c500134
    ctx->pc = 0x292ac8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x292acc: 0x12000048
    ctx->pc = 0x292ACCu;
    {
        const bool branch_taken_0x292acc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x292AD0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292acc) {
            ctx->pc = 0x292BF0u;
            goto label_292bf0;
        }
    }
    ctx->pc = 0x292AD4u;
    // 0x292ad4: 0x0
    ctx->pc = 0x292ad4u;
    // NOP
label_292ad8:
    // 0x292ad8: 0xc0a4a6a
    ctx->pc = 0x292AD8u;
    SET_GPR_U32(ctx, 31, 0x292AE0u);
    ctx->pc = 0x2929A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNewAnimInst_0x2929a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292AE0u; }
    }
    if (ctx->pc != 0x292AE0u) { return; }
    ctx->pc = 0x292AE0u;
    // 0x292ae0: 0x40882d
    ctx->pc = 0x292ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ae4: 0x52200040
    ctx->pc = 0x292AE4u;
    {
        const bool branch_taken_0x292ae4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x292ae4) {
            ctx->pc = 0x292AE8u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x292BE8u;
            goto label_292be8;
        }
    }
    ctx->pc = 0x292AECu;
    // 0x292aec: 0x8e4200c8
    ctx->pc = 0x292aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x292af0: 0x1040000e
    ctx->pc = 0x292AF0u;
    {
        const bool branch_taken_0x292af0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292AF4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292af0) {
            ctx->pc = 0x292B2Cu;
            goto label_292b2c;
        }
    }
    ctx->pc = 0x292AF8u;
    // 0x292af8: 0x8c620050
    ctx->pc = 0x292af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x292afc: 0x5040000c
    ctx->pc = 0x292AFCu;
    {
        const bool branch_taken_0x292afc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x292afc) {
            ctx->pc = 0x292B00u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 17));
            ctx->pc = 0x292B30u;
            goto label_292b30;
        }
    }
    ctx->pc = 0x292B04u;
    // 0x292b04: 0x0
    ctx->pc = 0x292b04u;
    // NOP
label_292b08:
    // 0x292b08: 0x8c630050
    ctx->pc = 0x292b08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x292b0c: 0x8c620050
    ctx->pc = 0x292b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x292b10: 0x0
    ctx->pc = 0x292b10u;
    // NOP
    // 0x292b14: 0x0
    ctx->pc = 0x292b14u;
    // NOP
    // 0x292b18: 0x0
    ctx->pc = 0x292b18u;
    // NOP
    // 0x292b1c: 0x1440fffa
    ctx->pc = 0x292B1Cu;
    {
        const bool branch_taken_0x292b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292b1c) {
            ctx->pc = 0x292B08u;
            goto label_292b08;
        }
    }
    ctx->pc = 0x292B24u;
    // 0x292b24: 0x10000002
    ctx->pc = 0x292B24u;
    {
        const bool branch_taken_0x292b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292B28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 17));
        if (branch_taken_0x292b24) {
            ctx->pc = 0x292B30u;
            goto label_292b30;
        }
    }
    ctx->pc = 0x292B2Cu;
label_292b2c:
    // 0x292b2c: 0xae5100c8
    ctx->pc = 0x292b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 17));
label_292b30:
    // 0x292b30: 0x8e020004
    ctx->pc = 0x292b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292b34: 0x10400027
    ctx->pc = 0x292B34u;
    {
        const bool branch_taken_0x292b34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292B38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x292b34) {
            ctx->pc = 0x292BD4u;
            goto label_292bd4;
        }
    }
    ctx->pc = 0x292B3Cu;
    // 0x292b3c: 0x8c44463c
    ctx->pc = 0x292b3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 17980)));
    // 0x292b40: 0x96020002
    ctx->pc = 0x292b40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x292b44: 0x30420001
    ctx->pc = 0x292b44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x292b48: 0x1040000c
    ctx->pc = 0x292B48u;
    {
        const bool branch_taken_0x292b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292B4Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292b48) {
            ctx->pc = 0x292B7Cu;
            goto label_292b7c;
        }
    }
    ctx->pc = 0x292B50u;
    // 0x292b50: 0x82020018
    ctx->pc = 0x292b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x292b54: 0x10400007
    ctx->pc = 0x292B54u;
    {
        const bool branch_taken_0x292b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292B58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
        if (branch_taken_0x292b54) {
            ctx->pc = 0x292B74u;
            goto label_292b74;
        }
    }
    ctx->pc = 0x292B5Cu;
    // 0x292b5c: 0x26050018
    ctx->pc = 0x292b5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 24));
    // 0x292b60: 0xc084c2a
    ctx->pc = 0x292B60u;
    SET_GPR_U32(ctx, 31, 0x292B68u);
    ctx->pc = 0x292B64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2130A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindNode_0x2130a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B68u; }
    }
    if (ctx->pc != 0x292B68u) { return; }
    ctx->pc = 0x292B68u;
    // 0x292b68: 0x40202d
    ctx->pc = 0x292b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b6c: 0x54800003
    ctx->pc = 0x292B6Cu;
    {
        const bool branch_taken_0x292b6c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x292b6c) {
            ctx->pc = 0x292B70u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x292B7Cu;
            goto label_292b7c;
        }
    }
    ctx->pc = 0x292B74u;
label_292b74:
    // 0x292b74: 0x8e4400cc
    ctx->pc = 0x292b74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x292b78: 0x260282d
    ctx->pc = 0x292b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292b7c:
    // 0x292b7c: 0xc0b3ec0
    ctx->pc = 0x292B7Cu;
    SET_GPR_U32(ctx, 31, 0x292B84u);
    ctx->pc = 0x292B80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292B84u; }
    }
    if (ctx->pc != 0x292B84u) { return; }
    ctx->pc = 0x292B84u;
    // 0x292b84: 0xae220048
    ctx->pc = 0x292b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x292b88: 0xc6000020
    ctx->pc = 0x292b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292b8c: 0xe4400030
    ctx->pc = 0x292b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x292b90: 0x8e220048
    ctx->pc = 0x292b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x292b94: 0xc6000024
    ctx->pc = 0x292b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292b98: 0xe4400034
    ctx->pc = 0x292b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x292b9c: 0x8e220048
    ctx->pc = 0x292b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x292ba0: 0xc6000028
    ctx->pc = 0x292ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292ba4: 0xe4400038
    ctx->pc = 0x292ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x292ba8: 0x8e040004
    ctx->pc = 0x292ba8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292bac: 0x220282d
    ctx->pc = 0x292bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bb0: 0x302d
    ctx->pc = 0x292bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bb4: 0xc08476a
    ctx->pc = 0x292BB4u;
    SET_GPR_U32(ctx, 31, 0x292BBCu);
    ctx->pc = 0x292BB8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BBCu; }
    }
    if (ctx->pc != 0x292BBCu) { return; }
    ctx->pc = 0x292BBCu;
    // 0x292bbc: 0xae220000
    ctx->pc = 0x292bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x292bc0: 0x8c440000
    ctx->pc = 0x292bc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292bc4: 0xc0b3f94
    ctx->pc = 0x292BC4u;
    SET_GPR_U32(ctx, 31, 0x292BCCu);
    ctx->pc = 0x292BC8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BCCu; }
    }
    if (ctx->pc != 0x292BCCu) { return; }
    ctx->pc = 0x292BCCu;
    // 0x292bcc: 0x10000006
    ctx->pc = 0x292BCCu;
    {
        const bool branch_taken_0x292bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292BD0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x292bcc) {
            ctx->pc = 0x292BE8u;
            goto label_292be8;
        }
    }
    ctx->pc = 0x292BD4u;
label_292bd4:
    // 0x292bd4: 0x3c04003b
    ctx->pc = 0x292bd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x292bd8: 0x2484e1a0
    ctx->pc = 0x292bd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959520));
    // 0x292bdc: 0xc0b492e
    ctx->pc = 0x292BDCu;
    SET_GPR_U32(ctx, 31, 0x292BE4u);
    ctx->pc = 0x292BE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292BE4u; }
    }
    if (ctx->pc != 0x292BE4u) { return; }
    ctx->pc = 0x292BE4u;
    // 0x292be4: 0x8e100008
    ctx->pc = 0x292be4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_292be8:
    // 0x292be8: 0x1600ffbb
    ctx->pc = 0x292BE8u;
    {
        const bool branch_taken_0x292be8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x292be8) {
            ctx->pc = 0x292AD8u;
            goto label_292ad8;
        }
    }
    ctx->pc = 0x292BF0u;
label_292bf0:
    // 0x292bf0: 0xdfbf0040
    ctx->pc = 0x292bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292bf4: 0xdfb30030
    ctx->pc = 0x292bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292bf8: 0xdfb20020
    ctx->pc = 0x292bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292bfc: 0xdfb10010
    ctx->pc = 0x292bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292c00: 0xdfb00000
    ctx->pc = 0x292c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292c04: 0x3e00008
    ctx->pc = 0x292C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292C08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292AD8u: goto label_292ad8;
            case 0x292B08u: goto label_292b08;
            case 0x292B2Cu: goto label_292b2c;
            case 0x292B30u: goto label_292b30;
            case 0x292B74u: goto label_292b74;
            case 0x292B7Cu: goto label_292b7c;
            case 0x292BD4u: goto label_292bd4;
            case 0x292BE8u: goto label_292be8;
            case 0x292BF0u: goto label_292bf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292C0Cu;
}
