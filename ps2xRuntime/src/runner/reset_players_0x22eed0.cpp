#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_players
// Address: 0x22eed0 - 0x22f00c
void reset_players_0x22eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22eed0u;

    // 0x22eed0: 0x27bdffb0
    ctx->pc = 0x22eed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22eed4: 0xffbf0040
    ctx->pc = 0x22eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22eed8: 0xffb30030
    ctx->pc = 0x22eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22eedc: 0xffb20020
    ctx->pc = 0x22eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22eee0: 0xffb10010
    ctx->pc = 0x22eee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22eee4: 0xffb00000
    ctx->pc = 0x22eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22eee8: 0x3c020033
    ctx->pc = 0x22eee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22eeec: 0x2403ffff
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22eef0: 0xac43c7c4
    ctx->pc = 0x22eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952900), GPR_U32(ctx, 3));
    // 0x22eef4: 0x3c02003c
    ctx->pc = 0x22eef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22eef8: 0xac401b40
    ctx->pc = 0x22eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6976), GPR_U32(ctx, 0));
    // 0x22eefc: 0x882d
    ctx->pc = 0x22eefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ef00:
    // 0x22ef00: 0xc08ba18
    ctx->pc = 0x22EF00u;
    SET_GPR_U32(ctx, 31, 0x22EF08u);
    ctx->pc = 0x22EF04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22E860u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_players_sub_0x22e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF08u; }
    }
    if (ctx->pc != 0x22EF08u) { return; }
    ctx->pc = 0x22EF08u;
    // 0x22ef08: 0x26310001
    ctx->pc = 0x22ef08u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ef0c: 0x2a220004
    ctx->pc = 0x22ef0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x22ef10: 0x1440fffb
    ctx->pc = 0x22EF10u;
    {
        const bool branch_taken_0x22ef10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22EF14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22ef10) {
            ctx->pc = 0x22EF00u;
            goto label_22ef00;
        }
    }
    ctx->pc = 0x22EF18u;
    // 0x22ef18: 0x882d
    ctx->pc = 0x22ef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef1c: 0x24430898
    ctx->pc = 0x22ef1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2200));
label_22ef20:
    // 0x22ef20: 0x111080
    ctx->pc = 0x22ef20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22ef24: 0x431021
    ctx->pc = 0x22ef24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ef28: 0xac400000
    ctx->pc = 0x22ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ef2c: 0x26310001
    ctx->pc = 0x22ef2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ef30: 0x2a220004
    ctx->pc = 0x22ef30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x22ef34: 0x1440fffa
    ctx->pc = 0x22EF34u;
    {
        const bool branch_taken_0x22ef34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22ef34) {
            ctx->pc = 0x22EF20u;
            goto label_22ef20;
        }
    }
    ctx->pc = 0x22EF3Cu;
    // 0x22ef3c: 0x882d
    ctx->pc = 0x22ef3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef40: 0x3c020032
    ctx->pc = 0x22ef40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22ef44: 0x244308a8
    ctx->pc = 0x22ef44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2216));
label_22ef48:
    // 0x22ef48: 0x111080
    ctx->pc = 0x22ef48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x22ef4c: 0x431021
    ctx->pc = 0x22ef4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ef50: 0xac400000
    ctx->pc = 0x22ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ef54: 0x26310001
    ctx->pc = 0x22ef54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ef58: 0x2a220002
    ctx->pc = 0x22ef58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x22ef5c: 0x1440fffa
    ctx->pc = 0x22EF5Cu;
    {
        const bool branch_taken_0x22ef5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22ef5c) {
            ctx->pc = 0x22EF48u;
            goto label_22ef48;
        }
    }
    ctx->pc = 0x22EF64u;
    // 0x22ef64: 0x3c020038
    ctx->pc = 0x22ef64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x22ef68: 0x8c44c9a0
    ctx->pc = 0x22ef68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
    // 0x22ef6c: 0x3c05003a
    ctx->pc = 0x22ef6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22ef70: 0x24a52550
    ctx->pc = 0x22ef70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x22ef74: 0xc0b3ec0
    ctx->pc = 0x22EF74u;
    SET_GPR_U32(ctx, 31, 0x22EF7Cu);
    ctx->pc = 0x22EF78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF7Cu; }
    }
    if (ctx->pc != 0x22EF7Cu) { return; }
    ctx->pc = 0x22EF7Cu;
    // 0x22ef7c: 0x3c030033
    ctx->pc = 0x22ef7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22ef80: 0xc08ac56
    ctx->pc = 0x22EF80u;
    SET_GPR_U32(ctx, 31, 0x22EF88u);
    ctx->pc = 0x22EF84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952896), GPR_U32(ctx, 2));
    ctx->pc = 0x22B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_got_it_0x22b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EF88u; }
    }
    if (ctx->pc != 0x22EF88u) { return; }
    ctx->pc = 0x22EF88u;
    // 0x22ef88: 0x3c020033
    ctx->pc = 0x22ef88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22ef8c: 0xac40cb6c
    ctx->pc = 0x22ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953836), GPR_U32(ctx, 0));
    // 0x22ef90: 0x3c020032
    ctx->pc = 0x22ef90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22ef94: 0xac4013dc
    ctx->pc = 0x22ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5084), GPR_U32(ctx, 0));
    // 0x22ef98: 0x3c04003a
    ctx->pc = 0x22ef98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22ef9c: 0x24847680
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30336));
    // 0x22efa0: 0xc0b1bb4
    ctx->pc = 0x22EFA0u;
    SET_GPR_U32(ctx, 31, 0x22EFA8u);
    ctx->pc = 0x22EFA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EFA8u; }
    }
    if (ctx->pc != 0x22EFA8u) { return; }
    ctx->pc = 0x22EFA8u;
    // 0x22efa8: 0x3c03003c
    ctx->pc = 0x22efa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x22efac: 0xac621b00
    ctx->pc = 0x22efacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6912), GPR_U32(ctx, 2));
    // 0x22efb0: 0x882d
    ctx->pc = 0x22efb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22efb4: 0x3c020032
    ctx->pc = 0x22efb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22efb8: 0x245313c8
    ctx->pc = 0x22efb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 5064));
    // 0x22efbc: 0x3c02003c
    ctx->pc = 0x22efbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22efc0: 0x24521b08
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 6920));
    // 0x22efc4: 0x118080
    ctx->pc = 0x22efc4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
label_22efc8:
    // 0x22efc8: 0x2131021
    ctx->pc = 0x22efc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x22efcc: 0x8c440000
    ctx->pc = 0x22efccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22efd0: 0xc0b1bb4
    ctx->pc = 0x22EFD0u;
    SET_GPR_U32(ctx, 31, 0x22EFD8u);
    ctx->pc = 0x22EFD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EFD8u; }
    }
    if (ctx->pc != 0x22EFD8u) { return; }
    ctx->pc = 0x22EFD8u;
    // 0x22efd8: 0x2128021
    ctx->pc = 0x22efd8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22efdc: 0xae020000
    ctx->pc = 0x22efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22efe0: 0x26310001
    ctx->pc = 0x22efe0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22efe4: 0x2a220005
    ctx->pc = 0x22efe4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 5));
    // 0x22efe8: 0x1440fff7
    ctx->pc = 0x22EFE8u;
    {
        const bool branch_taken_0x22efe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22EFECu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x22efe8) {
            ctx->pc = 0x22EFC8u;
            goto label_22efc8;
        }
    }
    ctx->pc = 0x22EFF0u;
    // 0x22eff0: 0xdfbf0040
    ctx->pc = 0x22eff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22eff4: 0xdfb30030
    ctx->pc = 0x22eff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eff8: 0xdfb20020
    ctx->pc = 0x22eff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22effc: 0xdfb10010
    ctx->pc = 0x22effcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f000: 0xdfb00000
    ctx->pc = 0x22f000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f004: 0x3e00008
    ctx->pc = 0x22F004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EF00u: goto label_22ef00;
            case 0x22EF20u: goto label_22ef20;
            case 0x22EF48u: goto label_22ef48;
            case 0x22EFC8u: goto label_22efc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F00Cu;
}
