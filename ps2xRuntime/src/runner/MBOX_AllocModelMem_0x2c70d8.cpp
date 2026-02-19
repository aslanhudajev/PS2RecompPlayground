#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_AllocModelMem
// Address: 0x2c70d8 - 0x2c7294
void MBOX_AllocModelMem_0x2c70d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c70d8u;

    // 0x2c70d8: 0x27bdff70
    ctx->pc = 0x2c70d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c70dc: 0xffbf0080
    ctx->pc = 0x2c70dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c70e0: 0xffb70070
    ctx->pc = 0x2c70e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2c70e4: 0xffb60060
    ctx->pc = 0x2c70e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c70e8: 0xffb50050
    ctx->pc = 0x2c70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c70ec: 0xffb40040
    ctx->pc = 0x2c70ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c70f0: 0xffb30030
    ctx->pc = 0x2c70f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c70f4: 0xffb20020
    ctx->pc = 0x2c70f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c70f8: 0xffb10010
    ctx->pc = 0x2c70f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c70fc: 0xffb00000
    ctx->pc = 0x2c70fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7100: 0xc0b82d
    ctx->pc = 0x2c7100u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7104: 0x3c020036
    ctx->pc = 0x2c7104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c7108: 0x8c52dee0
    ctx->pc = 0x2c7108u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c710c: 0x8e430038
    ctx->pc = 0x2c710cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c7110: 0x8c740000
    ctx->pc = 0x2c7110u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7114: 0x26820001
    ctx->pc = 0x2c7114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
    // 0x2c7118: 0xac620000
    ctx->pc = 0x2c7118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c711c: 0x3c060038
    ctx->pc = 0x2c711cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)56 << 16));
    // 0x2c7120: 0x8e430038
    ctx->pc = 0x2c7120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c7124: 0x8c620000
    ctx->pc = 0x2c7124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7128: 0xacc2c500
    ctx->pc = 0x2c7128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952192), GPR_U32(ctx, 2));
    // 0x2c712c: 0x143100
    ctx->pc = 0x2c712cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 20), 4));
    // 0x2c7130: 0x661821
    ctx->pc = 0x2c7130u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c7134: 0x24020008
    ctx->pc = 0x2c7134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c7138: 0xac620010
    ctx->pc = 0x2c7138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2c713c: 0x8e420038
    ctx->pc = 0x2c713cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c7140: 0x461021
    ctx->pc = 0x2c7140u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c7144: 0xac400004
    ctx->pc = 0x2c7144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c7148: 0x8e420038
    ctx->pc = 0x2c7148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c714c: 0x461021
    ctx->pc = 0x2c714cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c7150: 0xac400008
    ctx->pc = 0x2c7150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c7154: 0x8e420038
    ctx->pc = 0x2c7154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c7158: 0x461021
    ctx->pc = 0x2c7158u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c715c: 0xac40000c
    ctx->pc = 0x2c715cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2c7160: 0x249300ff
    ctx->pc = 0x2c7160u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 255));
    // 0x2c7164: 0x2402ff00
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2c7168: 0x2629824
    ctx->pc = 0x2c7168u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2c716c: 0x24b1000f
    ctx->pc = 0x2c716cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 5), 15));
    // 0x2c7170: 0x2402fff0
    ctx->pc = 0x2c7170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2c7174: 0x2228824
    ctx->pc = 0x2c7174u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c7178: 0xc0b4fa0
    ctx->pc = 0x2C7178u;
    SET_GPR_U32(ctx, 31, 0x2C7180u);
    ctx->pc = 0x2C717Cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7180u; }
    }
    if (ctx->pc != 0x2C7180u) { return; }
    ctx->pc = 0x2C7180u;
    // 0x2c7180: 0x40a82d
    ctx->pc = 0x2c7180u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7184: 0x3c02003a
    ctx->pc = 0x2c7184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c7188: 0x8c56230c
    ctx->pc = 0x2c7188u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x2c718c: 0x2a820014
    ctx->pc = 0x2c718cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 20));
    // 0x2c7190: 0x14400006
    ctx->pc = 0x2C7190u;
    {
        const bool branch_taken_0x2c7190 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C7194u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
        if (branch_taken_0x2c7190) {
            ctx->pc = 0x2C71ACu;
            goto label_2c71ac;
        }
    }
    ctx->pc = 0x2C7198u;
    // 0x2c7198: 0x3c04003b
    ctx->pc = 0x2c7198u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c719c: 0x24847020
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28704));
    // 0x2c71a0: 0xc0b49a6
    ctx->pc = 0x2C71A0u;
    SET_GPR_U32(ctx, 31, 0x2C71A8u);
    ctx->pc = 0x2C71A4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71A8u; }
    }
    if (ctx->pc != 0x2C71A8u) { return; }
    ctx->pc = 0x2C71A8u;
    // 0x2c71a8: 0x2b1102a
    ctx->pc = 0x2c71a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 17)));
label_2c71ac:
    // 0x2c71ac: 0x10400005
    ctx->pc = 0x2C71ACu;
    {
        const bool branch_taken_0x2c71ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c71ac) {
            ctx->pc = 0x2C71C4u;
            goto label_2c71c4;
        }
    }
    ctx->pc = 0x2C71B4u;
    // 0x2c71b4: 0x3c04003b
    ctx->pc = 0x2c71b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c71b8: 0x24847040
    ctx->pc = 0x2c71b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28736));
    // 0x2c71bc: 0xc0b49a6
    ctx->pc = 0x2C71BCu;
    SET_GPR_U32(ctx, 31, 0x2C71C4u);
    ctx->pc = 0x2C71C0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71C4u; }
    }
    if (ctx->pc != 0x2C71C4u) { return; }
    ctx->pc = 0x2C71C4u;
label_2c71c4:
    // 0x2c71c4: 0xc0b4f86
    ctx->pc = 0x2C71C4u;
    SET_GPR_U32(ctx, 31, 0x2C71CCu);
    ctx->pc = 0x2D3E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMemBase_0x2d3e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71CCu; }
    }
    if (ctx->pc != 0x2C71CCu) { return; }
    ctx->pc = 0x2C71CCu;
    // 0x2c71cc: 0x40802d
    ctx->pc = 0x2c71ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c71d0: 0x320200ff
    ctx->pc = 0x2c71d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 255));
    // 0x2c71d4: 0x24040100
    ctx->pc = 0x2c71d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c71d8: 0x822023
    ctx->pc = 0x2c71d8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c71dc: 0x2048021
    ctx->pc = 0x2c71dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2c71e0: 0xc0b4f52
    ctx->pc = 0x2C71E0u;
    SET_GPR_U32(ctx, 31, 0x2C71E8u);
    ctx->pc = 0x2C71E4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71E8u; }
    }
    if (ctx->pc != 0x2C71E8u) { return; }
    ctx->pc = 0x2C71E8u;
    // 0x2c71e8: 0xc0b4fa0
    ctx->pc = 0x2C71E8u;
    SET_GPR_U32(ctx, 31, 0x2C71F0u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71F0u; }
    }
    if (ctx->pc != 0x2C71F0u) { return; }
    ctx->pc = 0x2C71F0u;
    // 0x2c71f0: 0x2a28823
    ctx->pc = 0x2c71f0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c71f4: 0x2338823
    ctx->pc = 0x2c71f4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2c71f8: 0x8e420038
    ctx->pc = 0x2c71f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c71fc: 0x141900
    ctx->pc = 0x2c71fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 4));
    // 0x2c7200: 0x431021
    ctx->pc = 0x2c7200u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7204: 0xac500004
    ctx->pc = 0x2c7204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2c7208: 0x8e420038
    ctx->pc = 0x2c7208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c720c: 0x431021
    ctx->pc = 0x2c720cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7210: 0xac530008
    ctx->pc = 0x2c7210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x2c7214: 0x8e420038
    ctx->pc = 0x2c7214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2c7218: 0x431021
    ctx->pc = 0x2c7218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c721c: 0x2e0302d
    ctx->pc = 0x2c721cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7220: 0x14c00003
    ctx->pc = 0x2C7220u;
    {
        const bool branch_taken_0x2c7220 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C7224u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
        if (branch_taken_0x2c7220) {
            ctx->pc = 0x2C7230u;
            goto label_2c7230;
        }
    }
    ctx->pc = 0x2C7228u;
    // 0x2c7228: 0x3c02003b
    ctx->pc = 0x2c7228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2c722c: 0x24467090
    ctx->pc = 0x2c722cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 28816));
label_2c7230:
    // 0x2c7230: 0x3c04003b
    ctx->pc = 0x2c7230u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c7234: 0x24847060
    ctx->pc = 0x2c7234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28768));
    // 0x2c7238: 0x280282d
    ctx->pc = 0x2c7238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c723c: 0xc0b4a34
    ctx->pc = 0x2C723Cu;
    SET_GPR_U32(ctx, 31, 0x2C7244u);
    ctx->pc = 0x2C7240u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 22), 10));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7244u; }
    }
    if (ctx->pc != 0x2C7244u) { return; }
    ctx->pc = 0x2C7244u;
    // 0x2c7244: 0x3c02003a
    ctx->pc = 0x2c7244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c7248: 0x8c45230c
    ctx->pc = 0x2c7248u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x2c724c: 0x3c04003b
    ctx->pc = 0x2c724cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c7250: 0x248470a0
    ctx->pc = 0x2c7250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28832));
    // 0x2c7254: 0x52a83
    ctx->pc = 0x2c7254u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 10));
    // 0x2c7258: 0x133283
    ctx->pc = 0x2c7258u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 19), 10));
    // 0x2c725c: 0xc0b4a34
    ctx->pc = 0x2C725Cu;
    SET_GPR_U32(ctx, 31, 0x2C7264u);
    ctx->pc = 0x2C7260u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 17), 10));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7264u; }
    }
    if (ctx->pc != 0x2C7264u) { return; }
    ctx->pc = 0x2C7264u;
    // 0x2c7264: 0x280102d
    ctx->pc = 0x2c7264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7268: 0xdfbf0080
    ctx->pc = 0x2c7268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c726c: 0xdfb70070
    ctx->pc = 0x2c726cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c7270: 0xdfb60060
    ctx->pc = 0x2c7270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c7274: 0xdfb50050
    ctx->pc = 0x2c7274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c7278: 0xdfb40040
    ctx->pc = 0x2c7278u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c727c: 0xdfb30030
    ctx->pc = 0x2c727cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7280: 0xdfb20020
    ctx->pc = 0x2c7280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7284: 0xdfb10010
    ctx->pc = 0x2c7284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7288: 0xdfb00000
    ctx->pc = 0x2c7288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c728c: 0x3e00008
    ctx->pc = 0x2C728Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C71ACu: goto label_2c71ac;
            case 0x2C71C4u: goto label_2c71c4;
            case 0x2C7230u: goto label_2c7230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7294u;
}
