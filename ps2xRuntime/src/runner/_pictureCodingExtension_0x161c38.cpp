#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _pictureCodingExtension
// Address: 0x161c38 - 0x161e64
void _pictureCodingExtension_0x161c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_pictureCodingExtension");


    ctx->pc = 0x161c38u;

    // 0x161c38: 0x27bdffb0
    ctx->pc = 0x161c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x161c3c: 0x3c020023
    ctx->pc = 0x161c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x161c40: 0xffb20020
    ctx->pc = 0x161c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161c44: 0x24040004
    ctx->pc = 0x161c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x161c48: 0xffb10010
    ctx->pc = 0x161c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x161c4c: 0x3c120023
    ctx->pc = 0x161c4cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x161c50: 0xffb00000
    ctx->pc = 0x161c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161c54: 0x3c110023
    ctx->pc = 0x161c54u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161c58: 0xffbf0040
    ctx->pc = 0x161c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x161c5c: 0x8c43a21c
    ctx->pc = 0x161c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x161c60: 0xffb30030
    ctx->pc = 0x161c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x161c64: 0xc0585d4
    ctx->pc = 0x161C64u;
    SET_GPR_U32(ctx, 31, 0x161C6Cu);
    ctx->pc = 0x161C68u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C6Cu; }
        else if (ctx->pc != 0x161C6Cu) { ctx->pc = 0x161C6Cu; }
    }
    if (ctx->pc != 0x161C6Cu) { return; }
    ctx->pc = 0x161C6Cu;
    // 0x161c6c: 0x3c100023
    ctx->pc = 0x161c6cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161c70: 0x24040004
    ctx->pc = 0x161c70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x161c74: 0x0
    ctx->pc = 0x161c74u;
    // NOP
    // 0x161c78: 0xc0585d4
    ctx->pc = 0x161C78u;
    SET_GPR_U32(ctx, 31, 0x161C80u);
    ctx->pc = 0x161C7Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294943704));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C80u; }
        else if (ctx->pc != 0x161C80u) { ctx->pc = 0x161C80u; }
    }
    if (ctx->pc != 0x161C80u) { return; }
    ctx->pc = 0x161C80u;
    // 0x161c80: 0xae020004
    ctx->pc = 0x161c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x161c84: 0xc0585d4
    ctx->pc = 0x161C84u;
    SET_GPR_U32(ctx, 31, 0x161C8Cu);
    ctx->pc = 0x161C88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C8Cu; }
        else if (ctx->pc != 0x161C8Cu) { ctx->pc = 0x161C8Cu; }
    }
    if (ctx->pc != 0x161C8Cu) { return; }
    ctx->pc = 0x161C8Cu;
    // 0x161c8c: 0xae020008
    ctx->pc = 0x161c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x161c90: 0xc0585d4
    ctx->pc = 0x161C90u;
    SET_GPR_U32(ctx, 31, 0x161C98u);
    ctx->pc = 0x161C94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C98u; }
        else if (ctx->pc != 0x161C98u) { ctx->pc = 0x161C98u; }
    }
    if (ctx->pc != 0x161C98u) { return; }
    ctx->pc = 0x161C98u;
    // 0x161c98: 0xae02000c
    ctx->pc = 0x161c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x161c9c: 0xc0585d4
    ctx->pc = 0x161C9Cu;
    SET_GPR_U32(ctx, 31, 0x161CA4u);
    ctx->pc = 0x161CA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CA4u; }
        else if (ctx->pc != 0x161CA4u) { ctx->pc = 0x161CA4u; }
    }
    if (ctx->pc != 0x161CA4u) { return; }
    ctx->pc = 0x161CA4u;
    // 0x161ca4: 0xae22a3e8
    ctx->pc = 0x161ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943720), GPR_U32(ctx, 2));
    // 0x161ca8: 0x3c061000
    ctx->pc = 0x161ca8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x161cac: 0x34c62010
    ctx->pc = 0x161cacu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 8208));
    // 0x161cb0: 0x3c05fffc
    ctx->pc = 0x161cb0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65532 << 16));
    // 0x161cb4: 0x8cc30000
    ctx->pc = 0x161cb4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x161cb8: 0x34a5ffff
    ctx->pc = 0x161cb8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x161cbc: 0x21400
    ctx->pc = 0x161cbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x161cc0: 0x24040002
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x161cc4: 0x651824
    ctx->pc = 0x161cc4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161cc8: 0x621825
    ctx->pc = 0x161cc8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161ccc: 0xc0585d4
    ctx->pc = 0x161CCCu;
    SET_GPR_U32(ctx, 31, 0x161CD4u);
    ctx->pc = 0x161CD0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CD4u; }
        else if (ctx->pc != 0x161CD4u) { ctx->pc = 0x161CD4u; }
    }
    if (ctx->pc != 0x161CD4u) { return; }
    ctx->pc = 0x161CD4u;
    // 0x161cd4: 0x40182d
    ctx->pc = 0x161cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cd8: 0x8e6200d4
    ctx->pc = 0x161cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x161cdc: 0x14400002
    ctx->pc = 0x161CDCu;
    {
        const bool branch_taken_0x161cdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161CE0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294943724), GPR_U32(ctx, 3));
        if (branch_taken_0x161cdc) {
            ctx->pc = 0x161CE8u;
            goto label_161ce8;
        }
    }
    ctx->pc = 0x161CE4u;
    // 0x161ce4: 0xae6300d4
    ctx->pc = 0x161ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 3));
label_161ce8:
    // 0x161ce8: 0x24040001
    ctx->pc = 0x161ce8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161cec: 0xc0585d4
    ctx->pc = 0x161CECu;
    SET_GPR_U32(ctx, 31, 0x161CF4u);
    ctx->pc = 0x161CF0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CF4u; }
        else if (ctx->pc != 0x161CF4u) { ctx->pc = 0x161CF4u; }
    }
    if (ctx->pc != 0x161CF4u) { return; }
    ctx->pc = 0x161CF4u;
    // 0x161cf4: 0x3c110023
    ctx->pc = 0x161cf4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161cf8: 0x0
    ctx->pc = 0x161cf8u;
    // NOP
    // 0x161cfc: 0xc0585d4
    ctx->pc = 0x161CFCu;
    SET_GPR_U32(ctx, 31, 0x161D04u);
    ctx->pc = 0x161D00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D04u; }
        else if (ctx->pc != 0x161D04u) { ctx->pc = 0x161D04u; }
    }
    if (ctx->pc != 0x161D04u) { return; }
    ctx->pc = 0x161D04u;
    // 0x161d04: 0x3c100023
    ctx->pc = 0x161d04u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161d08: 0x0
    ctx->pc = 0x161d08u;
    // NOP
    // 0x161d0c: 0xc0585d4
    ctx->pc = 0x161D0Cu;
    SET_GPR_U32(ctx, 31, 0x161D14u);
    ctx->pc = 0x161D10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D14u; }
        else if (ctx->pc != 0x161D14u) { ctx->pc = 0x161D14u; }
    }
    if (ctx->pc != 0x161D14u) { return; }
    ctx->pc = 0x161D14u;
    // 0x161d14: 0x3c110023
    ctx->pc = 0x161d14u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161d18: 0xae02a3f8
    ctx->pc = 0x161d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943736), GPR_U32(ctx, 2));
    // 0x161d1c: 0xc0585d4
    ctx->pc = 0x161D1Cu;
    SET_GPR_U32(ctx, 31, 0x161D24u);
    ctx->pc = 0x161D20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D24u; }
        else if (ctx->pc != 0x161D24u) { ctx->pc = 0x161D24u; }
    }
    if (ctx->pc != 0x161D24u) { return; }
    ctx->pc = 0x161D24u;
    // 0x161d24: 0x3c100023
    ctx->pc = 0x161d24u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161d28: 0x3c051000
    ctx->pc = 0x161d28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x161d2c: 0x8ca52010
    ctx->pc = 0x161d2cu;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x161d30: 0x3c03ffbf
    ctx->pc = 0x161d30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65471 << 16));
    // 0x161d34: 0x3463ffff
    ctx->pc = 0x161d34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x161d38: 0x22580
    ctx->pc = 0x161d38u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 22));
    // 0x161d3c: 0xa32824
    ctx->pc = 0x161d3cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x161d40: 0xae22aaf4
    ctx->pc = 0x161d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945524), GPR_U32(ctx, 2));
    // 0x161d44: 0xa42825
    ctx->pc = 0x161d44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x161d48: 0x3c120023
    ctx->pc = 0x161d48u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x161d4c: 0x3c011000
    ctx->pc = 0x161d4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x161d50: 0xac252010
    ctx->pc = 0x161d50u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x161d54: 0xc0585d4
    ctx->pc = 0x161D54u;
    SET_GPR_U32(ctx, 31, 0x161D5Cu);
    ctx->pc = 0x161D58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D5Cu; }
        else if (ctx->pc != 0x161D5Cu) { ctx->pc = 0x161D5Cu; }
    }
    if (ctx->pc != 0x161D5Cu) { return; }
    ctx->pc = 0x161D5Cu;
    // 0x161d5c: 0x3c110023
    ctx->pc = 0x161d5cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161d60: 0x3c051000
    ctx->pc = 0x161d60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x161d64: 0x8ca52010
    ctx->pc = 0x161d64u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x161d68: 0x3c03ffdf
    ctx->pc = 0x161d68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65503 << 16));
    // 0x161d6c: 0x3463ffff
    ctx->pc = 0x161d6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x161d70: 0x22540
    ctx->pc = 0x161d70u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 21));
    // 0x161d74: 0xa32824
    ctx->pc = 0x161d74u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x161d78: 0xae02a3fc
    ctx->pc = 0x161d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943740), GPR_U32(ctx, 2));
    // 0x161d7c: 0xa42825
    ctx->pc = 0x161d7cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x161d80: 0x3c100023
    ctx->pc = 0x161d80u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161d84: 0x3c011000
    ctx->pc = 0x161d84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x161d88: 0xac252010
    ctx->pc = 0x161d88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x161d8c: 0xc0585d4
    ctx->pc = 0x161D8Cu;
    SET_GPR_U32(ctx, 31, 0x161D94u);
    ctx->pc = 0x161D90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D94u; }
        else if (ctx->pc != 0x161D94u) { ctx->pc = 0x161D94u; }
    }
    if (ctx->pc != 0x161D94u) { return; }
    ctx->pc = 0x161D94u;
    // 0x161d94: 0x3c051000
    ctx->pc = 0x161d94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x161d98: 0x8ca52010
    ctx->pc = 0x161d98u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x161d9c: 0x3c03ffef
    ctx->pc = 0x161d9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65519 << 16));
    // 0x161da0: 0x3463ffff
    ctx->pc = 0x161da0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x161da4: 0x22500
    ctx->pc = 0x161da4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 20));
    // 0x161da8: 0xa32824
    ctx->pc = 0x161da8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x161dac: 0xae42aaf8
    ctx->pc = 0x161dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945528), GPR_U32(ctx, 2));
    // 0x161db0: 0xa42825
    ctx->pc = 0x161db0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x161db4: 0x3c011000
    ctx->pc = 0x161db4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x161db8: 0xac252010
    ctx->pc = 0x161db8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x161dbc: 0xc0585d4
    ctx->pc = 0x161DBCu;
    SET_GPR_U32(ctx, 31, 0x161DC4u);
    ctx->pc = 0x161DC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DC4u; }
        else if (ctx->pc != 0x161DC4u) { ctx->pc = 0x161DC4u; }
    }
    if (ctx->pc != 0x161DC4u) { return; }
    ctx->pc = 0x161DC4u;
    // 0x161dc4: 0xae22a400
    ctx->pc = 0x161dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943744), GPR_U32(ctx, 2));
    // 0x161dc8: 0xc0585d4
    ctx->pc = 0x161DC8u;
    SET_GPR_U32(ctx, 31, 0x161DD0u);
    ctx->pc = 0x161DCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DD0u; }
        else if (ctx->pc != 0x161DD0u) { ctx->pc = 0x161DD0u; }
    }
    if (ctx->pc != 0x161DD0u) { return; }
    ctx->pc = 0x161DD0u;
    // 0x161dd0: 0x3c110023
    ctx->pc = 0x161dd0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161dd4: 0xae02a404
    ctx->pc = 0x161dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943748), GPR_U32(ctx, 2));
    // 0x161dd8: 0xc0585d4
    ctx->pc = 0x161DD8u;
    SET_GPR_U32(ctx, 31, 0x161DE0u);
    ctx->pc = 0x161DDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DE0u; }
        else if (ctx->pc != 0x161DE0u) { ctx->pc = 0x161DE0u; }
    }
    if (ctx->pc != 0x161DE0u) { return; }
    ctx->pc = 0x161DE0u;
    // 0x161de0: 0x3c100023
    ctx->pc = 0x161de0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161de4: 0x0
    ctx->pc = 0x161de4u;
    // NOP
    // 0x161de8: 0xc0585d4
    ctx->pc = 0x161DE8u;
    SET_GPR_U32(ctx, 31, 0x161DF0u);
    ctx->pc = 0x161DECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161DF0u; }
        else if (ctx->pc != 0x161DF0u) { ctx->pc = 0x161DF0u; }
    }
    if (ctx->pc != 0x161DF0u) { return; }
    ctx->pc = 0x161DF0u;
    // 0x161df0: 0x10400015
    ctx->pc = 0x161DF0u;
    {
        const bool branch_taken_0x161df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161DF4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943756), GPR_U32(ctx, 2));
        if (branch_taken_0x161df0) {
            ctx->pc = 0x161E48u;
            goto label_161e48;
        }
    }
    ctx->pc = 0x161DF8u;
    // 0x161df8: 0x24040001
    ctx->pc = 0x161df8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161dfc: 0xc0585d4
    ctx->pc = 0x161DFCu;
    SET_GPR_U32(ctx, 31, 0x161E04u);
    ctx->pc = 0x161E00u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E04u; }
        else if (ctx->pc != 0x161E04u) { ctx->pc = 0x161E04u; }
    }
    if (ctx->pc != 0x161E04u) { return; }
    ctx->pc = 0x161E04u;
    // 0x161e04: 0x3c110023
    ctx->pc = 0x161e04u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161e08: 0x0
    ctx->pc = 0x161e08u;
    // NOP
    // 0x161e0c: 0xc0585d4
    ctx->pc = 0x161E0Cu;
    SET_GPR_U32(ctx, 31, 0x161E14u);
    ctx->pc = 0x161E10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E14u; }
        else if (ctx->pc != 0x161E14u) { ctx->pc = 0x161E14u; }
    }
    if (ctx->pc != 0x161E14u) { return; }
    ctx->pc = 0x161E14u;
    // 0x161e14: 0x3c100023
    ctx->pc = 0x161e14u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161e18: 0x0
    ctx->pc = 0x161e18u;
    // NOP
    // 0x161e1c: 0xc0585d4
    ctx->pc = 0x161E1Cu;
    SET_GPR_U32(ctx, 31, 0x161E24u);
    ctx->pc = 0x161E20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E24u; }
        else if (ctx->pc != 0x161E24u) { ctx->pc = 0x161E24u; }
    }
    if (ctx->pc != 0x161E24u) { return; }
    ctx->pc = 0x161E24u;
    // 0x161e24: 0x3c110023
    ctx->pc = 0x161e24u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161e28: 0xae02a418
    ctx->pc = 0x161e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943768), GPR_U32(ctx, 2));
    // 0x161e2c: 0xc0585d4
    ctx->pc = 0x161E2Cu;
    SET_GPR_U32(ctx, 31, 0x161E34u);
    ctx->pc = 0x161E30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E34u; }
        else if (ctx->pc != 0x161E34u) { ctx->pc = 0x161E34u; }
    }
    if (ctx->pc != 0x161E34u) { return; }
    ctx->pc = 0x161E34u;
    // 0x161e34: 0x3c100023
    ctx->pc = 0x161e34u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161e38: 0x0
    ctx->pc = 0x161e38u;
    // NOP
    // 0x161e3c: 0xc0585d4
    ctx->pc = 0x161E3Cu;
    SET_GPR_U32(ctx, 31, 0x161E44u);
    ctx->pc = 0x161E40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161E44u; }
        else if (ctx->pc != 0x161E44u) { ctx->pc = 0x161E44u; }
    }
    if (ctx->pc != 0x161E44u) { return; }
    ctx->pc = 0x161E44u;
    // 0x161e44: 0xae02a420
    ctx->pc = 0x161e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943776), GPR_U32(ctx, 2));
label_161e48:
    // 0x161e48: 0xdfbf0040
    ctx->pc = 0x161e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161e4c: 0xdfb30030
    ctx->pc = 0x161e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161e50: 0xdfb20020
    ctx->pc = 0x161e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161e54: 0xdfb10010
    ctx->pc = 0x161e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161e58: 0xdfb00000
    ctx->pc = 0x161e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161e5c: 0x3e00008
    ctx->pc = 0x161E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161CE8u: goto label_161ce8;
            case 0x161E48u: goto label_161e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161E64u;
}
