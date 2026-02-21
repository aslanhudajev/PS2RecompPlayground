#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _multadd
// Address: 0x12ff00 - 0x130014
void _multadd_0x12ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12ff00u;

    // 0x12ff00: 0x27bdffa0
    ctx->pc = 0x12ff00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12ff04: 0xc0402d
    ctx->pc = 0x12ff04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff08: 0xffb40040
    ctx->pc = 0x12ff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12ff0c: 0x482d
    ctx->pc = 0x12ff0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff10: 0xffb30030
    ctx->pc = 0x12ff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12ff14: 0x80a02d
    ctx->pc = 0x12ff14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff18: 0xffb10010
    ctx->pc = 0x12ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12ff1c: 0xe0982d
    ctx->pc = 0x12ff1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff20: 0xffbf0050
    ctx->pc = 0x12ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12ff24: 0xa0882d
    ctx->pc = 0x12ff24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff28: 0xffb00000
    ctx->pc = 0x12ff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ff2c: 0x262a0014
    ctx->pc = 0x12ff2cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 20));
    // 0x12ff30: 0xffb20020
    ctx->pc = 0x12ff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12ff34: 0x140382d
    ctx->pc = 0x12ff34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff38: 0x8e320010
    ctx->pc = 0x12ff38u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12ff3c: 0x0
    ctx->pc = 0x12ff3cu;
    // NOP
label_12ff40:
    // 0x12ff40: 0x8ce30000
    ctx->pc = 0x12ff40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ff44: 0x25290001
    ctx->pc = 0x12ff44u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x12ff48: 0x132302a
    ctx->pc = 0x12ff48u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 18)));
    // 0x12ff4c: 0x3064ffff
    ctx->pc = 0x12ff4cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
    // 0x12ff50: 0x881018
    ctx->pc = 0x12ff50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x12ff54: 0x31c02
    ctx->pc = 0x12ff54u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x12ff58: 0x681818
    ctx->pc = 0x12ff58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12ff5c: 0x532021
    ctx->pc = 0x12ff5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12ff60: 0x42c02
    ctx->pc = 0x12ff60u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 4), 16));
    // 0x12ff64: 0x651821
    ctx->pc = 0x12ff64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ff68: 0x3084ffff
    ctx->pc = 0x12ff68u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x12ff6c: 0x31400
    ctx->pc = 0x12ff6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x12ff70: 0x39c02
    ctx->pc = 0x12ff70u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 3), 16));
    // 0x12ff74: 0x441021
    ctx->pc = 0x12ff74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12ff78: 0xace20000
    ctx->pc = 0x12ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12ff7c: 0x14c0fff0
    ctx->pc = 0x12FF7Cu;
    {
        const bool branch_taken_0x12ff7c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x12FF80u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x12ff7c) {
            ctx->pc = 0x12FF40u;
            goto label_12ff40;
        }
    }
    ctx->pc = 0x12FF84u;
    // 0x12ff84: 0x1260001b
    ctx->pc = 0x12FF84u;
    {
        const bool branch_taken_0x12ff84 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FF88u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12ff84) {
            ctx->pc = 0x12FFF4u;
            goto label_12fff4;
        }
    }
    ctx->pc = 0x12FF8Cu;
    // 0x12ff8c: 0x8e220008
    ctx->pc = 0x12ff8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12ff90: 0x242102a
    ctx->pc = 0x12ff90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x12ff94: 0x14400012
    ctx->pc = 0x12FF94u;
    {
        const bool branch_taken_0x12ff94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12FF98u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x12ff94) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FF9Cu;
    // 0x12ff9c: 0x8e250004
    ctx->pc = 0x12ff9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12ffa0: 0x280202d
    ctx->pc = 0x12ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffa4: 0xc04bf8a
    ctx->pc = 0x12FFA4u;
    SET_GPR_U32(ctx, 31, 0x12FFACu);
    ctx->pc = 0x12FFA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x12FE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFACu; }
    }
    if (ctx->pc != 0x12FFACu) { return; }
    ctx->pc = 0x12FFACu;
    // 0x12ffac: 0x8e260010
    ctx->pc = 0x12ffacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12ffb0: 0x40802d
    ctx->pc = 0x12ffb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffb4: 0x2625000c
    ctx->pc = 0x12ffb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    // 0x12ffb8: 0x2604000c
    ctx->pc = 0x12ffb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    // 0x12ffbc: 0x63080
    ctx->pc = 0x12ffbcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x12ffc0: 0xc04ac33
    ctx->pc = 0x12FFC0u;
    SET_GPR_U32(ctx, 31, 0x12FFC8u);
    ctx->pc = 0x12FFC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFC8u; }
    }
    if (ctx->pc != 0x12FFC8u) { return; }
    ctx->pc = 0x12FFC8u;
    // 0x12ffc8: 0x220282d
    ctx->pc = 0x12ffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffcc: 0xc04bfb4
    ctx->pc = 0x12FFCCu;
    SET_GPR_U32(ctx, 31, 0x12FFD4u);
    ctx->pc = 0x12FFD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FFD4u; }
    }
    if (ctx->pc != 0x12FFD4u) { return; }
    ctx->pc = 0x12FFD4u;
    // 0x12ffd4: 0x200882d
    ctx->pc = 0x12ffd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffd8: 0x262a0014
    ctx->pc = 0x12ffd8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 20));
    // 0x12ffdc: 0x121080
    ctx->pc = 0x12ffdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_12ffe0:
    // 0x12ffe0: 0x1421021
    ctx->pc = 0x12ffe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x12ffe4: 0x26520001
    ctx->pc = 0x12ffe4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x12ffe8: 0xac530000
    ctx->pc = 0x12ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x12ffec: 0xae320010
    ctx->pc = 0x12ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x12fff0: 0x220102d
    ctx->pc = 0x12fff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12fff4:
    // 0x12fff4: 0xdfbf0050
    ctx->pc = 0x12fff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fff8: 0xdfb40040
    ctx->pc = 0x12fff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fffc: 0xdfb30030
    ctx->pc = 0x12fffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130000: 0xdfb20020
    ctx->pc = 0x130000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130004: 0xdfb10010
    ctx->pc = 0x130004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130008: 0xdfb00000
    ctx->pc = 0x130008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13000c: 0x3e00008
    ctx->pc = 0x13000Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130010u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FF40u: goto label_12ff40;
            case 0x12FFE0u: goto label_12ffe0;
            case 0x12FFF4u: goto label_12fff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130014u;
}
