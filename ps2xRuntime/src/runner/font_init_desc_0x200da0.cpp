#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: font_init_desc
// Address: 0x200da0 - 0x200e80
void font_init_desc_0x200da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200da0u;

    // 0x200da0: 0x27bdff30
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x200da4: 0xffbf00c0
    ctx->pc = 0x200da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x200da8: 0xffb300b0
    ctx->pc = 0x200da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x200dac: 0xffb200a0
    ctx->pc = 0x200dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x200db0: 0xffb10090
    ctx->pc = 0x200db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x200db4: 0xffb00080
    ctx->pc = 0x200db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x200db8: 0x80982d
    ctx->pc = 0x200db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dbc: 0xa0802d
    ctx->pc = 0x200dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dc0: 0xc0902d
    ctx->pc = 0x200dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dc4: 0x3a0202d
    ctx->pc = 0x200dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dc8: 0x3c05003a
    ctx->pc = 0x200dc8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200dcc: 0x24a54758
    ctx->pc = 0x200dccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18264));
    // 0x200dd0: 0xc0b6252
    ctx->pc = 0x200DD0u;
    SET_GPR_U32(ctx, 31, 0x200DD8u);
    ctx->pc = 0x200DD4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DD8u; }
    }
    if (ctx->pc != 0x200DD8u) { return; }
    ctx->pc = 0x200DD8u;
    // 0x200dd8: 0x3c04003a
    ctx->pc = 0x200dd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200ddc: 0x24844760
    ctx->pc = 0x200ddcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18272));
    // 0x200de0: 0xc0b4e96
    ctx->pc = 0x200DE0u;
    SET_GPR_U32(ctx, 31, 0x200DE8u);
    ctx->pc = 0x200DE4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DE8u; }
    }
    if (ctx->pc != 0x200DE8u) { return; }
    ctx->pc = 0x200DE8u;
    // 0x200de8: 0x40882d
    ctx->pc = 0x200de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dec: 0xae300000
    ctx->pc = 0x200decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x200df0: 0x2622000c
    ctx->pc = 0x200df0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 12));
    // 0x200df4: 0xae220008
    ctx->pc = 0x200df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x200df8: 0x2662fff6
    ctx->pc = 0x200df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x200dfc: 0x2c420002
    ctx->pc = 0x200dfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x200e00: 0x10400007
    ctx->pc = 0x200E00u;
    {
        const bool branch_taken_0x200e00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200E04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200e00) {
            ctx->pc = 0x200E20u;
            goto label_200e20;
        }
    }
    ctx->pc = 0x200E08u;
    // 0x200e08: 0x240282d
    ctx->pc = 0x200e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e0c: 0x24060100
    ctx->pc = 0x200e0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x200e10: 0xc0b1282
    ctx->pc = 0x200E10u;
    SET_GPR_U32(ctx, 31, 0x200E18u);
    ctx->pc = 0x200E14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 210));
    ctx->pc = 0x2C4A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewFont_0x2c4a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E18u; }
    }
    if (ctx->pc != 0x200E18u) { return; }
    ctx->pc = 0x200E18u;
    // 0x200e18: 0x1000000e
    ctx->pc = 0x200E18u;
    {
        const bool branch_taken_0x200e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200E1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x200e18) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200E20u;
label_200e20:
    // 0x200e20: 0x2402000c
    ctx->pc = 0x200e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x200e24: 0x16620007
    ctx->pc = 0x200E24u;
    {
        const bool branch_taken_0x200e24 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x200E28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200e24) {
            ctx->pc = 0x200E44u;
            goto label_200e44;
        }
    }
    ctx->pc = 0x200E2Cu;
    // 0x200e2c: 0x220202d
    ctx->pc = 0x200e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e30: 0x24060100
    ctx->pc = 0x200e30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x200e34: 0xc0b1282
    ctx->pc = 0x200E34u;
    SET_GPR_U32(ctx, 31, 0x200E3Cu);
    ctx->pc = 0x200E38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x2C4A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewFont_0x2c4a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E3Cu; }
    }
    if (ctx->pc != 0x200E3Cu) { return; }
    ctx->pc = 0x200E3Cu;
    // 0x200e3c: 0x10000005
    ctx->pc = 0x200E3Cu;
    {
        const bool branch_taken_0x200e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200E40u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x200e3c) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200E44u;
label_200e44:
    // 0x200e44: 0x24060080
    ctx->pc = 0x200e44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x200e48: 0xc0b1282
    ctx->pc = 0x200E48u;
    SET_GPR_U32(ctx, 31, 0x200E50u);
    ctx->pc = 0x200E4Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x2C4A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewFont_0x2c4a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E50u; }
    }
    if (ctx->pc != 0x200E50u) { return; }
    ctx->pc = 0x200E50u;
    // 0x200e50: 0x3c03003c
    ctx->pc = 0x200e50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_200e54:
    // 0x200e54: 0x2463b200
    ctx->pc = 0x200e54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947328));
    // 0x200e58: 0x131080
    ctx->pc = 0x200e58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x200e5c: 0x431021
    ctx->pc = 0x200e5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200e60: 0xac510000
    ctx->pc = 0x200e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x200e64: 0xdfbf00c0
    ctx->pc = 0x200e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x200e68: 0xdfb300b0
    ctx->pc = 0x200e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x200e6c: 0xdfb200a0
    ctx->pc = 0x200e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x200e70: 0xdfb10090
    ctx->pc = 0x200e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x200e74: 0xdfb00080
    ctx->pc = 0x200e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200e78: 0x3e00008
    ctx->pc = 0x200E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200E20u: goto label_200e20;
            case 0x200E44u: goto label_200e44;
            case 0x200E54u: goto label_200e54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200E80u;
}
