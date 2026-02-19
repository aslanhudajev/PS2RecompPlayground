#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartComboFX
// Address: 0x27ef00 - 0x27f050
void StartComboFX_0x27ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ef00u;

    // 0x27ef00: 0x27bdffa0
    ctx->pc = 0x27ef00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27ef04: 0xffbf0050
    ctx->pc = 0x27ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27ef08: 0xffb40040
    ctx->pc = 0x27ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27ef0c: 0xffb30030
    ctx->pc = 0x27ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27ef10: 0xffb20020
    ctx->pc = 0x27ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27ef14: 0xffb10010
    ctx->pc = 0x27ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27ef18: 0xffb00000
    ctx->pc = 0x27ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ef1c: 0x80a02d
    ctx->pc = 0x27ef1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef20: 0xa0982d
    ctx->pc = 0x27ef20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef24: 0xc0882d
    ctx->pc = 0x27ef24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef28: 0x6200029
    ctx->pc = 0x27EF28u;
    {
        const bool branch_taken_0x27ef28 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x27EF2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27ef28) {
            ctx->pc = 0x27EFD0u;
            goto label_27efd0;
        }
    }
    ctx->pc = 0x27EF30u;
    // 0x27ef30: 0x3c020034
    ctx->pc = 0x27ef30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ef34: 0x8c440e78
    ctx->pc = 0x27ef34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 3704)));
    // 0x27ef38: 0x280282d
    ctx->pc = 0x27ef38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef3c: 0x44806000
    ctx->pc = 0x27ef3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27ef40: 0x302d
    ctx->pc = 0x27ef40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef44: 0x3c070008
    ctx->pc = 0x27ef44u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    // 0x27ef48: 0xc09f5fa
    ctx->pc = 0x27EF48u;
    SET_GPR_U32(ctx, 31, 0x27EF50u);
    ctx->pc = 0x27EF4Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2432));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF50u; }
    }
    if (ctx->pc != 0x27EF50u) { return; }
    ctx->pc = 0x27EF50u;
    // 0x27ef50: 0x40902d
    ctx->pc = 0x27ef50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef54: 0x640001e
    ctx->pc = 0x27EF54u;
    {
        const bool branch_taken_0x27ef54 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x27EF58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27ef54) {
            ctx->pc = 0x27EFD0u;
            goto label_27efd0;
        }
    }
    ctx->pc = 0x27EF5Cu;
    // 0x27ef5c: 0x24420eb0
    ctx->pc = 0x27ef5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27ef60: 0x241000f0
    ctx->pc = 0x27ef60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27ef64: 0x2508018
    ctx->pc = 0x27ef64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ef68: 0x2028021
    ctx->pc = 0x27ef68u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27ef6c: 0x3c020035
    ctx->pc = 0x27ef6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x27ef70: 0x2442f540
    ctx->pc = 0x27ef70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964544));
    // 0x27ef74: 0x118880
    ctx->pc = 0x27ef74u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 2));
    // 0x27ef78: 0x2221021
    ctx->pc = 0x27ef78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27ef7c: 0x8e040014
    ctx->pc = 0x27ef7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27ef80: 0x8c450000
    ctx->pc = 0x27ef80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ef84: 0xc0b4180
    ctx->pc = 0x27EF84u;
    SET_GPR_U32(ctx, 31, 0x27EF8Cu);
    ctx->pc = 0x27EF88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0600u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetColor_0x2d0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF8Cu; }
    }
    if (ctx->pc != 0x27EF8Cu) { return; }
    ctx->pc = 0x27EF8Cu;
    // 0x27ef8c: 0x8e040014
    ctx->pc = 0x27ef8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27ef90: 0x240501ff
    ctx->pc = 0x27ef90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 511));
    // 0x27ef94: 0xc0b4156
    ctx->pc = 0x27EF94u;
    SET_GPR_U32(ctx, 31, 0x27EF9Cu);
    ctx->pc = 0x27EF98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EF9Cu; }
    }
    if (ctx->pc != 0x27EF9Cu) { return; }
    ctx->pc = 0x27EF9Cu;
    // 0x27ef9c: 0x3c020034
    ctx->pc = 0x27ef9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27efa0: 0x244200c0
    ctx->pc = 0x27efa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 192));
    // 0x27efa4: 0x2228821
    ctx->pc = 0x27efa4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27efa8: 0x8e230000
    ctx->pc = 0x27efa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27efac: 0x2402000c
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27efb0: 0x621818
    ctx->pc = 0x27efb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27efb4: 0x3c050034
    ctx->pc = 0x27efb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x27efb8: 0x24a50068
    ctx->pc = 0x27efb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
    // 0x27efbc: 0x240202d
    ctx->pc = 0x27efbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efc0: 0x3c014120
    ctx->pc = 0x27efc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x27efc4: 0x44816000
    ctx->pc = 0x27efc4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27efc8: 0xc09fdc2
    ctx->pc = 0x27EFC8u;
    SET_GPR_U32(ctx, 31, 0x27EFD0u);
    ctx->pc = 0x27EFCCu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EFD0u; }
    }
    if (ctx->pc != 0x27EFD0u) { return; }
    ctx->pc = 0x27EFD0u;
label_27efd0:
    // 0x27efd0: 0x6600016
    ctx->pc = 0x27EFD0u;
    {
        const bool branch_taken_0x27efd0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x27EFD4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27efd0) {
            ctx->pc = 0x27F02Cu;
            goto label_27f02c;
        }
    }
    ctx->pc = 0x27EFD8u;
    // 0x27efd8: 0x24630e68
    ctx->pc = 0x27efd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3688));
    // 0x27efdc: 0x131080
    ctx->pc = 0x27efdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x27efe0: 0x431021
    ctx->pc = 0x27efe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27efe4: 0x8c440000
    ctx->pc = 0x27efe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27efe8: 0x280282d
    ctx->pc = 0x27efe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efec: 0x44806000
    ctx->pc = 0x27efecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27eff0: 0x302d
    ctx->pc = 0x27eff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eff4: 0x3c070040
    ctx->pc = 0x27eff4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)64 << 16));
    // 0x27eff8: 0xc09f5fa
    ctx->pc = 0x27EFF8u;
    SET_GPR_U32(ctx, 31, 0x27F000u);
    ctx->pc = 0x27EFFCu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F000u; }
    }
    if (ctx->pc != 0x27F000u) { return; }
    ctx->pc = 0x27F000u;
    // 0x27f000: 0x40902d
    ctx->pc = 0x27f000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f004: 0x6400009
    ctx->pc = 0x27F004u;
    {
        const bool branch_taken_0x27f004 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x27F008u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27f004) {
            ctx->pc = 0x27F02Cu;
            goto label_27f02c;
        }
    }
    ctx->pc = 0x27F00Cu;
    // 0x27f00c: 0x24630eb0
    ctx->pc = 0x27f00cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27f010: 0x240200f0
    ctx->pc = 0x27f010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f014: 0x2421018
    ctx->pc = 0x27f014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f018: 0x431021
    ctx->pc = 0x27f018u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f01c: 0x8c440014
    ctx->pc = 0x27f01cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27f020: 0x240501ff
    ctx->pc = 0x27f020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 511));
    // 0x27f024: 0xc0b4156
    ctx->pc = 0x27F024u;
    SET_GPR_U32(ctx, 31, 0x27F02Cu);
    ctx->pc = 0x27F028u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F02Cu; }
    }
    if (ctx->pc != 0x27F02Cu) { return; }
    ctx->pc = 0x27F02Cu;
label_27f02c:
    // 0x27f02c: 0x240102d
    ctx->pc = 0x27f02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f030: 0xdfbf0050
    ctx->pc = 0x27f030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f034: 0xdfb40040
    ctx->pc = 0x27f034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f038: 0xdfb30030
    ctx->pc = 0x27f038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f03c: 0xdfb20020
    ctx->pc = 0x27f03cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f040: 0xdfb10010
    ctx->pc = 0x27f040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f044: 0xdfb00000
    ctx->pc = 0x27f044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f048: 0x3e00008
    ctx->pc = 0x27F048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F04Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27EFD0u: goto label_27efd0;
            case 0x27F02Cu: goto label_27f02c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F050u;
}
