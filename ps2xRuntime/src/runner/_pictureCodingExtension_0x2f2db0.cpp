#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureCodingExtension
// Address: 0x2f2db0 - 0x2f2fdc
void _pictureCodingExtension_0x2f2db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2db0u;

    // 0x2f2db0: 0x27bdffb0
    ctx->pc = 0x2f2db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f2db4: 0x3c02003a
    ctx->pc = 0x2f2db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f2db8: 0xffb20020
    ctx->pc = 0x2f2db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2dbc: 0x24040004
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f2dc0: 0xffb10010
    ctx->pc = 0x2f2dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2dc4: 0x3c12003a
    ctx->pc = 0x2f2dc4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2dc8: 0xffb00000
    ctx->pc = 0x2f2dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2dcc: 0x3c11003a
    ctx->pc = 0x2f2dccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2dd0: 0xffbf0040
    ctx->pc = 0x2f2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f2dd4: 0x8c433024
    ctx->pc = 0x2f2dd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2f2dd8: 0xffb30030
    ctx->pc = 0x2f2dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f2ddc: 0xc0bca32
    ctx->pc = 0x2F2DDCu;
    SET_GPR_U32(ctx, 31, 0x2F2DE4u);
    ctx->pc = 0x2F2DE0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DE4u; }
    }
    if (ctx->pc != 0x2F2DE4u) { return; }
    ctx->pc = 0x2F2DE4u;
    // 0x2f2de4: 0x3c10003a
    ctx->pc = 0x2f2de4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2de8: 0x24040004
    ctx->pc = 0x2f2de8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f2dec: 0xae0231d8
    ctx->pc = 0x2f2decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12760), GPR_U32(ctx, 2));
    // 0x2f2df0: 0xc0bca32
    ctx->pc = 0x2F2DF0u;
    SET_GPR_U32(ctx, 31, 0x2F2DF8u);
    ctx->pc = 0x2F2DF4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12760));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DF8u; }
    }
    if (ctx->pc != 0x2F2DF8u) { return; }
    ctx->pc = 0x2F2DF8u;
    // 0x2f2df8: 0xae020004
    ctx->pc = 0x2f2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f2dfc: 0xc0bca32
    ctx->pc = 0x2F2DFCu;
    SET_GPR_U32(ctx, 31, 0x2F2E04u);
    ctx->pc = 0x2F2E00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E04u; }
    }
    if (ctx->pc != 0x2F2E04u) { return; }
    ctx->pc = 0x2F2E04u;
    // 0x2f2e04: 0xae020008
    ctx->pc = 0x2f2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2f2e08: 0xc0bca32
    ctx->pc = 0x2F2E08u;
    SET_GPR_U32(ctx, 31, 0x2F2E10u);
    ctx->pc = 0x2F2E0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E10u; }
    }
    if (ctx->pc != 0x2F2E10u) { return; }
    ctx->pc = 0x2F2E10u;
    // 0x2f2e10: 0xae02000c
    ctx->pc = 0x2f2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2f2e14: 0xc0bca32
    ctx->pc = 0x2F2E14u;
    SET_GPR_U32(ctx, 31, 0x2F2E1Cu);
    ctx->pc = 0x2F2E18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E1Cu; }
    }
    if (ctx->pc != 0x2F2E1Cu) { return; }
    ctx->pc = 0x2F2E1Cu;
    // 0x2f2e1c: 0xae2231e8
    ctx->pc = 0x2f2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12776), GPR_U32(ctx, 2));
    // 0x2f2e20: 0x3c061000
    ctx->pc = 0x2f2e20u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x2f2e24: 0x34c62010
    ctx->pc = 0x2f2e24u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 8208));
    // 0x2f2e28: 0x3c05fffc
    ctx->pc = 0x2f2e28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65532 << 16));
    // 0x2f2e2c: 0x8cc30000
    ctx->pc = 0x2f2e2cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x2f2e30: 0x34a5ffff
    ctx->pc = 0x2f2e30u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x2f2e34: 0x21400
    ctx->pc = 0x2f2e34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f2e38: 0x24040002
    ctx->pc = 0x2f2e38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2e3c: 0x651824
    ctx->pc = 0x2f2e3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f2e40: 0x621825
    ctx->pc = 0x2f2e40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2e44: 0xc0bca32
    ctx->pc = 0x2F2E44u;
    SET_GPR_U32(ctx, 31, 0x2F2E4Cu);
    ctx->pc = 0x2F2E48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E4Cu; }
    }
    if (ctx->pc != 0x2F2E4Cu) { return; }
    ctx->pc = 0x2F2E4Cu;
    // 0x2f2e4c: 0x40182d
    ctx->pc = 0x2f2e4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e50: 0x8e6200d4
    ctx->pc = 0x2f2e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x2f2e54: 0x14400002
    ctx->pc = 0x2F2E54u;
    {
        const bool branch_taken_0x2f2e54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F2E58u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12780), GPR_U32(ctx, 3));
        if (branch_taken_0x2f2e54) {
            ctx->pc = 0x2F2E60u;
            goto label_2f2e60;
        }
    }
    ctx->pc = 0x2F2E5Cu;
    // 0x2f2e5c: 0xae6300d4
    ctx->pc = 0x2f2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 3));
label_2f2e60:
    // 0x2f2e60: 0x24040001
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2e64: 0xc0bca32
    ctx->pc = 0x2F2E64u;
    SET_GPR_U32(ctx, 31, 0x2F2E6Cu);
    ctx->pc = 0x2F2E68u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E6Cu; }
    }
    if (ctx->pc != 0x2F2E6Cu) { return; }
    ctx->pc = 0x2F2E6Cu;
    // 0x2f2e6c: 0x3c11003a
    ctx->pc = 0x2f2e6cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2e70: 0xae0231f0
    ctx->pc = 0x2f2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12784), GPR_U32(ctx, 2));
    // 0x2f2e74: 0xc0bca32
    ctx->pc = 0x2F2E74u;
    SET_GPR_U32(ctx, 31, 0x2F2E7Cu);
    ctx->pc = 0x2F2E78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E7Cu; }
    }
    if (ctx->pc != 0x2F2E7Cu) { return; }
    ctx->pc = 0x2F2E7Cu;
    // 0x2f2e7c: 0x3c10003a
    ctx->pc = 0x2f2e7cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2e80: 0xae2231f4
    ctx->pc = 0x2f2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12788), GPR_U32(ctx, 2));
    // 0x2f2e84: 0xc0bca32
    ctx->pc = 0x2F2E84u;
    SET_GPR_U32(ctx, 31, 0x2F2E8Cu);
    ctx->pc = 0x2F2E88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E8Cu; }
    }
    if (ctx->pc != 0x2F2E8Cu) { return; }
    ctx->pc = 0x2F2E8Cu;
    // 0x2f2e8c: 0x3c11003a
    ctx->pc = 0x2f2e8cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2e90: 0xae0231f8
    ctx->pc = 0x2f2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12792), GPR_U32(ctx, 2));
    // 0x2f2e94: 0xc0bca32
    ctx->pc = 0x2F2E94u;
    SET_GPR_U32(ctx, 31, 0x2F2E9Cu);
    ctx->pc = 0x2F2E98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E9Cu; }
    }
    if (ctx->pc != 0x2F2E9Cu) { return; }
    ctx->pc = 0x2F2E9Cu;
    // 0x2f2e9c: 0x3c10003a
    ctx->pc = 0x2f2e9cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2ea0: 0x3c051000
    ctx->pc = 0x2f2ea0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2f2ea4: 0x8ca52010
    ctx->pc = 0x2f2ea4u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x2f2ea8: 0x3c03ffbf
    ctx->pc = 0x2f2ea8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65471 << 16));
    // 0x2f2eac: 0x3463ffff
    ctx->pc = 0x2f2eacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2f2eb0: 0x22580
    ctx->pc = 0x2f2eb0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 22));
    // 0x2f2eb4: 0xa32824
    ctx->pc = 0x2f2eb4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2eb8: 0xae2238f4
    ctx->pc = 0x2f2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14580), GPR_U32(ctx, 2));
    // 0x2f2ebc: 0xa42825
    ctx->pc = 0x2f2ebcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f2ec0: 0x3c12003a
    ctx->pc = 0x2f2ec0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2ec4: 0x3c011000
    ctx->pc = 0x2f2ec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x2f2ec8: 0xac252010
    ctx->pc = 0x2f2ec8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x2f2ecc: 0xc0bca32
    ctx->pc = 0x2F2ECCu;
    SET_GPR_U32(ctx, 31, 0x2F2ED4u);
    ctx->pc = 0x2F2ED0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2ED4u; }
    }
    if (ctx->pc != 0x2F2ED4u) { return; }
    ctx->pc = 0x2F2ED4u;
    // 0x2f2ed4: 0x3c11003a
    ctx->pc = 0x2f2ed4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2ed8: 0x3c051000
    ctx->pc = 0x2f2ed8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2f2edc: 0x8ca52010
    ctx->pc = 0x2f2edcu;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x2f2ee0: 0x3c03ffdf
    ctx->pc = 0x2f2ee0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65503 << 16));
    // 0x2f2ee4: 0x3463ffff
    ctx->pc = 0x2f2ee4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2f2ee8: 0x22540
    ctx->pc = 0x2f2ee8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 21));
    // 0x2f2eec: 0xa32824
    ctx->pc = 0x2f2eecu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2ef0: 0xae0231fc
    ctx->pc = 0x2f2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12796), GPR_U32(ctx, 2));
    // 0x2f2ef4: 0xa42825
    ctx->pc = 0x2f2ef4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f2ef8: 0x3c10003a
    ctx->pc = 0x2f2ef8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2efc: 0x3c011000
    ctx->pc = 0x2f2efcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x2f2f00: 0xac252010
    ctx->pc = 0x2f2f00u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x2f2f04: 0xc0bca32
    ctx->pc = 0x2F2F04u;
    SET_GPR_U32(ctx, 31, 0x2F2F0Cu);
    ctx->pc = 0x2F2F08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F0Cu; }
    }
    if (ctx->pc != 0x2F2F0Cu) { return; }
    ctx->pc = 0x2F2F0Cu;
    // 0x2f2f0c: 0x3c051000
    ctx->pc = 0x2f2f0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2f2f10: 0x8ca52010
    ctx->pc = 0x2f2f10u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 8208))); // MMIO: 0x10002010
    // 0x2f2f14: 0x3c03ffef
    ctx->pc = 0x2f2f14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65519 << 16));
    // 0x2f2f18: 0x3463ffff
    ctx->pc = 0x2f2f18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2f2f1c: 0x22500
    ctx->pc = 0x2f2f1cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 20));
    // 0x2f2f20: 0xa32824
    ctx->pc = 0x2f2f20u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2f24: 0xae4238f8
    ctx->pc = 0x2f2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14584), GPR_U32(ctx, 2));
    // 0x2f2f28: 0xa42825
    ctx->pc = 0x2f2f28u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f2f2c: 0x3c011000
    ctx->pc = 0x2f2f2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x2f2f30: 0xac252010
    ctx->pc = 0x2f2f30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x2f2f34: 0xc0bca32
    ctx->pc = 0x2F2F34u;
    SET_GPR_U32(ctx, 31, 0x2F2F3Cu);
    ctx->pc = 0x2F2F38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F3Cu; }
    }
    if (ctx->pc != 0x2F2F3Cu) { return; }
    ctx->pc = 0x2F2F3Cu;
    // 0x2f2f3c: 0xae223200
    ctx->pc = 0x2f2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12800), GPR_U32(ctx, 2));
    // 0x2f2f40: 0xc0bca32
    ctx->pc = 0x2F2F40u;
    SET_GPR_U32(ctx, 31, 0x2F2F48u);
    ctx->pc = 0x2F2F44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F48u; }
    }
    if (ctx->pc != 0x2F2F48u) { return; }
    ctx->pc = 0x2F2F48u;
    // 0x2f2f48: 0x3c11003a
    ctx->pc = 0x2f2f48u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2f4c: 0xae023204
    ctx->pc = 0x2f2f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12804), GPR_U32(ctx, 2));
    // 0x2f2f50: 0xc0bca32
    ctx->pc = 0x2F2F50u;
    SET_GPR_U32(ctx, 31, 0x2F2F58u);
    ctx->pc = 0x2F2F54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F58u; }
    }
    if (ctx->pc != 0x2F2F58u) { return; }
    ctx->pc = 0x2F2F58u;
    // 0x2f2f58: 0x3c10003a
    ctx->pc = 0x2f2f58u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2f5c: 0xae223208
    ctx->pc = 0x2f2f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12808), GPR_U32(ctx, 2));
    // 0x2f2f60: 0xc0bca32
    ctx->pc = 0x2F2F60u;
    SET_GPR_U32(ctx, 31, 0x2F2F68u);
    ctx->pc = 0x2F2F64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F68u; }
    }
    if (ctx->pc != 0x2F2F68u) { return; }
    ctx->pc = 0x2F2F68u;
    // 0x2f2f68: 0x10400015
    ctx->pc = 0x2F2F68u;
    {
        const bool branch_taken_0x2f2f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2F6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12812), GPR_U32(ctx, 2));
        if (branch_taken_0x2f2f68) {
            ctx->pc = 0x2F2FC0u;
            goto label_2f2fc0;
        }
    }
    ctx->pc = 0x2F2F70u;
    // 0x2f2f70: 0x24040001
    ctx->pc = 0x2f2f70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2f74: 0xc0bca32
    ctx->pc = 0x2F2F74u;
    SET_GPR_U32(ctx, 31, 0x2F2F7Cu);
    ctx->pc = 0x2F2F78u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F7Cu; }
    }
    if (ctx->pc != 0x2F2F7Cu) { return; }
    ctx->pc = 0x2F2F7Cu;
    // 0x2f2f7c: 0x3c11003a
    ctx->pc = 0x2f2f7cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2f80: 0xae023210
    ctx->pc = 0x2f2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12816), GPR_U32(ctx, 2));
    // 0x2f2f84: 0xc0bca32
    ctx->pc = 0x2F2F84u;
    SET_GPR_U32(ctx, 31, 0x2F2F8Cu);
    ctx->pc = 0x2F2F88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F8Cu; }
    }
    if (ctx->pc != 0x2F2F8Cu) { return; }
    ctx->pc = 0x2F2F8Cu;
    // 0x2f2f8c: 0x3c10003a
    ctx->pc = 0x2f2f8cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2f90: 0xae223214
    ctx->pc = 0x2f2f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12820), GPR_U32(ctx, 2));
    // 0x2f2f94: 0xc0bca32
    ctx->pc = 0x2F2F94u;
    SET_GPR_U32(ctx, 31, 0x2F2F9Cu);
    ctx->pc = 0x2F2F98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F9Cu; }
    }
    if (ctx->pc != 0x2F2F9Cu) { return; }
    ctx->pc = 0x2F2F9Cu;
    // 0x2f2f9c: 0x3c11003a
    ctx->pc = 0x2f2f9cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2fa0: 0xae023218
    ctx->pc = 0x2f2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12824), GPR_U32(ctx, 2));
    // 0x2f2fa4: 0xc0bca32
    ctx->pc = 0x2F2FA4u;
    SET_GPR_U32(ctx, 31, 0x2F2FACu);
    ctx->pc = 0x2F2FA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FACu; }
    }
    if (ctx->pc != 0x2F2FACu) { return; }
    ctx->pc = 0x2F2FACu;
    // 0x2f2fac: 0x3c10003a
    ctx->pc = 0x2f2facu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2fb0: 0xae22321c
    ctx->pc = 0x2f2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12828), GPR_U32(ctx, 2));
    // 0x2f2fb4: 0xc0bca32
    ctx->pc = 0x2F2FB4u;
    SET_GPR_U32(ctx, 31, 0x2F2FBCu);
    ctx->pc = 0x2F2FB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FBCu; }
    }
    if (ctx->pc != 0x2F2FBCu) { return; }
    ctx->pc = 0x2F2FBCu;
    // 0x2f2fbc: 0xae023220
    ctx->pc = 0x2f2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12832), GPR_U32(ctx, 2));
label_2f2fc0:
    // 0x2f2fc0: 0xdfbf0040
    ctx->pc = 0x2f2fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2fc4: 0xdfb30030
    ctx->pc = 0x2f2fc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2fc8: 0xdfb20020
    ctx->pc = 0x2f2fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2fcc: 0xdfb10010
    ctx->pc = 0x2f2fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2fd0: 0xdfb00000
    ctx->pc = 0x2f2fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2fd4: 0x3e00008
    ctx->pc = 0x2F2FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2FD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2E60u: goto label_2f2e60;
            case 0x2F2FC0u: goto label_2f2fc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2FDCu;
}
