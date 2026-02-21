#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: playmovie
// Address: 0x118b60 - 0x118c14
void playmovie_0x118b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118b60u;

    // 0x118b60: 0x27bdffc0
    ctx->pc = 0x118b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118b64: 0x3c020075
    ctx->pc = 0x118b64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)117 << 16));
    // 0x118b68: 0xffb10010
    ctx->pc = 0x118b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118b6c: 0xffb00000
    ctx->pc = 0x118b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118b70: 0x2451e530
    ctx->pc = 0x118b70u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x118b74: 0xffb20020
    ctx->pc = 0x118b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118b78: 0x80802d
    ctx->pc = 0x118b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b7c: 0xaf8684cc
    ctx->pc = 0x118b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935756), GPR_U32(ctx, 6));
    // 0x118b80: 0x100902d
    ctx->pc = 0x118b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b84: 0xaf8584bc
    ctx->pc = 0x118b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935740), GPR_U32(ctx, 5));
    // 0x118b88: 0x220202d
    ctx->pc = 0x118b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b8c: 0xffbf0030
    ctx->pc = 0x118b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118b90: 0x240502d0
    ctx->pc = 0x118b90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 720));
    // 0x118b94: 0xaf8784d0
    ctx->pc = 0x118b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 7));
    // 0x118b98: 0xc046aa6
    ctx->pc = 0x118B98u;
    SET_GPR_U32(ctx, 31, 0x118BA0u);
    ctx->pc = 0x118B9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x11AA98u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispCreate_0x11aa98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BA0u; }
    }
    if (ctx->pc != 0x118BA0u) { return; }
    ctx->pc = 0x118BA0u;
    // 0x118ba0: 0x3c058000
    ctx->pc = 0x118ba0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x118ba4: 0xc046c74
    ctx->pc = 0x118BA4u;
    SET_GPR_U32(ctx, 31, 0x118BACu);
    ctx->pc = 0x118BA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispClear_0x11b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BACu; }
    }
    if (ctx->pc != 0x118BACu) { return; }
    ctx->pc = 0x118BACu;
    // 0x118bac: 0xc04639c
    ctx->pc = 0x118BACu;
    SET_GPR_U32(ctx, 31, 0x118BB4u);
    ctx->pc = 0x118BB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        initAll_0x118e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BB4u; }
    }
    if (ctx->pc != 0x118BB4u) { return; }
    ctx->pc = 0x118BB4u;
    // 0x118bb4: 0x10400012
    ctx->pc = 0x118BB4u;
    {
        const bool branch_taken_0x118bb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118BB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x118bb4) {
            ctx->pc = 0x118C00u;
            goto label_118c00;
        }
    }
    ctx->pc = 0x118BBCu;
    // 0x118bbc: 0x3c040075
    ctx->pc = 0x118bbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x118bc0: 0x3c050067
    ctx->pc = 0x118bc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)103 << 16));
    // 0x118bc4: 0x3c060075
    ctx->pc = 0x118bc4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)117 << 16));
    // 0x118bc8: 0x240382d
    ctx->pc = 0x118bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bcc: 0x2484e5c8
    ctx->pc = 0x118bccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960584));
    // 0x118bd0: 0x24a5a000
    ctx->pc = 0x118bd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942720));
    // 0x118bd4: 0xc046306
    ctx->pc = 0x118BD4u;
    SET_GPR_U32(ctx, 31, 0x118BDCu);
    ctx->pc = 0x118BD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294960768));
    ctx->pc = 0x118C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        readMpeg_0x118c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BDCu; }
    }
    if (ctx->pc != 0x118BDCu) { return; }
    ctx->pc = 0x118BDCu;
    // 0x118bdc: 0xc04644c
    ctx->pc = 0x118BDCu;
    SET_GPR_U32(ctx, 31, 0x118BE4u);
    ctx->pc = 0x119130u;
    {
        const uint32_t __entryPc = ctx->pc;
        termAll_0x119130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BE4u; }
    }
    if (ctx->pc != 0x118BE4u) { return; }
    ctx->pc = 0x118BE4u;
    // 0x118be4: 0x220202d
    ctx->pc = 0x118be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118be8: 0xdfbf0030
    ctx->pc = 0x118be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118bec: 0xdfb20020
    ctx->pc = 0x118becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118bf0: 0xdfb10010
    ctx->pc = 0x118bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118bf4: 0xdfb00000
    ctx->pc = 0x118bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118bf8: 0x8046b42
    ctx->pc = 0x118BF8u;
    ctx->pc = 0x118BFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11AD08u;
    dispDelete_0x11ad08(rdram, ctx, runtime); return;
    ctx->pc = 0x118C00u;
label_118c00:
    // 0x118c00: 0xdfb20020
    ctx->pc = 0x118c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118c04: 0xdfb10010
    ctx->pc = 0x118c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c08: 0xdfb00000
    ctx->pc = 0x118c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118c0c: 0x3e00008
    ctx->pc = 0x118C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118C00u: goto label_118c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118C14u;
}
