#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: xyechofdc
// Address: 0x2d1e60 - 0x2d1f68
void xyechofdc_0x2d1e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1e60u;

    // 0x2d1e60: 0x27bdfef0
    ctx->pc = 0x2d1e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d1e64: 0xffbf00a0
    ctx->pc = 0x2d1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2d1e68: 0xffb40090
    ctx->pc = 0x2d1e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2d1e6c: 0xffb30080
    ctx->pc = 0x2d1e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2d1e70: 0xffb20070
    ctx->pc = 0x2d1e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d1e74: 0xffb10060
    ctx->pc = 0x2d1e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2d1e78: 0xffb00050
    ctx->pc = 0x2d1e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d1e7c: 0x80a02d
    ctx->pc = 0x2d1e7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e80: 0xa0882d
    ctx->pc = 0x2d1e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e84: 0xc0982d
    ctx->pc = 0x2d1e84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e88: 0xe0902d
    ctx->pc = 0x2d1e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e8c: 0xffa900f8
    ctx->pc = 0x2d1e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 9));
    // 0x2d1e90: 0xffaa0100
    ctx->pc = 0x2d1e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 10));
    // 0x2d1e94: 0xffab0108
    ctx->pc = 0x2d1e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 11));
    // 0x2d1e98: 0x100802d
    ctx->pc = 0x2d1e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e9c: 0x3a0202d
    ctx->pc = 0x2d1e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ea0: 0x200282d
    ctx->pc = 0x2d1ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ea4: 0xc0b5d5e
    ctx->pc = 0x2D1EA4u;
    SET_GPR_U32(ctx, 31, 0x2D1EACu);
    ctx->pc = 0x2D1EA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 248));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EACu; }
    }
    if (ctx->pc != 0x2D1EACu) { return; }
    ctx->pc = 0x2D1EACu;
    // 0x2d1eac: 0x3c02003a
    ctx->pc = 0x2d1eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1eb0: 0x8c421bdc
    ctx->pc = 0x2d1eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7132)));
    // 0x2d1eb4: 0x10400024
    ctx->pc = 0x2D1EB4u;
    {
        const bool branch_taken_0x2d1eb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1EB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2d1eb4) {
            ctx->pc = 0x2D1F48u;
            goto label_2d1f48;
        }
    }
    ctx->pc = 0x2D1EBCu;
    // 0x2d1ebc: 0x16420002
    ctx->pc = 0x2D1EBCu;
    {
        const bool branch_taken_0x2d1ebc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D1EC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d1ebc) {
            ctx->pc = 0x2D1EC8u;
            goto label_2d1ec8;
        }
    }
    ctx->pc = 0x2D1EC4u;
    // 0x2d1ec4: 0x8c722250
    ctx->pc = 0x2d1ec4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 8784)));
label_2d1ec8:
    // 0x2d1ec8: 0x26420001
    ctx->pc = 0x2d1ec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d1ecc: 0xac622250
    ctx->pc = 0x2d1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8784), GPR_U32(ctx, 2));
    // 0x2d1ed0: 0x3a0202d
    ctx->pc = 0x2d1ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ed4: 0x200282d
    ctx->pc = 0x2d1ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ed8: 0xc0b5d5e
    ctx->pc = 0x2D1ED8u;
    SET_GPR_U32(ctx, 31, 0x2D1EE0u);
    ctx->pc = 0x2D1EDCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 248));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EE0u; }
    }
    if (ctx->pc != 0x2D1EE0u) { return; }
    ctx->pc = 0x2D1EE0u;
    // 0x2d1ee0: 0xc0b144c
    ctx->pc = 0x2D1EE0u;
    SET_GPR_U32(ctx, 31, 0x2D1EE8u);
    ctx->pc = 0x2D1EE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EE8u; }
    }
    if (ctx->pc != 0x2D1EE8u) { return; }
    ctx->pc = 0x2D1EE8u;
    // 0x2d1ee8: 0x40802d
    ctx->pc = 0x2d1ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1eec: 0x1388c0
    ctx->pc = 0x2d1eecu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d1ef0: 0x1290c0
    ctx->pc = 0x2d1ef0u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2d1ef4: 0x26240001
    ctx->pc = 0x2d1ef4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d1ef8: 0x26450002
    ctx->pc = 0x2d1ef8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 2));
    // 0x2d1efc: 0xc0b13be
    ctx->pc = 0x2D1EFCu;
    SET_GPR_U32(ctx, 31, 0x2D1F04u);
    ctx->pc = 0x2D1F00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSysText_0x2c4ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F04u; }
    }
    if (ctx->pc != 0x2D1F04u) { return; }
    ctx->pc = 0x2D1F04u;
    // 0x2d1f04: 0xc0b144c
    ctx->pc = 0x2D1F04u;
    SET_GPR_U32(ctx, 31, 0x2D1F0Cu);
    ctx->pc = 0x2D1F08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F0Cu; }
    }
    if (ctx->pc != 0x2D1F0Cu) { return; }
    ctx->pc = 0x2D1F0Cu;
    // 0x2d1f0c: 0x220202d
    ctx->pc = 0x2d1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f10: 0x240282d
    ctx->pc = 0x2d1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f14: 0xc0b13be
    ctx->pc = 0x2D1F14u;
    SET_GPR_U32(ctx, 31, 0x2D1F1Cu);
    ctx->pc = 0x2D1F18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSysText_0x2c4ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F1Cu; }
    }
    if (ctx->pc != 0x2D1F1Cu) { return; }
    ctx->pc = 0x2D1F1Cu;
    // 0x2d1f1c: 0x40882d
    ctx->pc = 0x2d1f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f20: 0xc0b144c
    ctx->pc = 0x2D1F20u;
    SET_GPR_U32(ctx, 31, 0x2D1F28u);
    ctx->pc = 0x2D1F24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F28u; }
    }
    if (ctx->pc != 0x2D1F28u) { return; }
    ctx->pc = 0x2D1F28u;
    // 0x2d1f28: 0x12200007
    ctx->pc = 0x2D1F28u;
    {
        const bool branch_taken_0x2d1f28 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1F2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d1f28) {
            ctx->pc = 0x2D1F48u;
            goto label_2d1f48;
        }
    }
    ctx->pc = 0x2D1F30u;
    // 0x2d1f30: 0x8c421be8
    ctx->pc = 0x2d1f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7144)));
    // 0x2d1f34: 0x10400005
    ctx->pc = 0x2D1F34u;
    {
        const bool branch_taken_0x2d1f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D1F38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2d1f34) {
            ctx->pc = 0x2D1F4Cu;
            goto label_2d1f4c;
        }
    }
    ctx->pc = 0x2D1F3Cu;
    // 0x2d1f3c: 0x8e220000
    ctx->pc = 0x2d1f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1f40: 0x34420008
    ctx->pc = 0x2d1f40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2d1f44: 0xae220000
    ctx->pc = 0x2d1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d1f48:
    // 0x2d1f48: 0xdfbf00a0
    ctx->pc = 0x2d1f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2d1f4c:
    // 0x2d1f4c: 0xdfb40090
    ctx->pc = 0x2d1f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d1f50: 0xdfb30080
    ctx->pc = 0x2d1f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d1f54: 0xdfb20070
    ctx->pc = 0x2d1f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d1f58: 0xdfb10060
    ctx->pc = 0x2d1f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1f5c: 0xdfb00050
    ctx->pc = 0x2d1f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1f60: 0x3e00008
    ctx->pc = 0x2D1F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D1EC8u: goto label_2d1ec8;
            case 0x2D1F48u: goto label_2d1f48;
            case 0x2D1F4Cu: goto label_2d1f4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D1F68u;
}
