#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _motionVectors
// Address: 0x160f00 - 0x16107c
void _motionVectors_0x160f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_motionVectors");


    ctx->pc = 0x160f00u;

    // 0x160f00: 0x27bdff60
    ctx->pc = 0x160f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x160f04: 0x24020001
    ctx->pc = 0x160f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f08: 0xffbe0080
    ctx->pc = 0x160f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x160f0c: 0xffb70070
    ctx->pc = 0x160f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x160f10: 0xc0f02d
    ctx->pc = 0x160f10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f14: 0xffb60060
    ctx->pc = 0x160f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x160f18: 0xffb50050
    ctx->pc = 0x160f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x160f1c: 0x80b02d
    ctx->pc = 0x160f1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f20: 0xffb40040
    ctx->pc = 0x160f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x160f24: 0x160a82d
    ctx->pc = 0x160f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f28: 0xffb30030
    ctx->pc = 0x160f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x160f2c: 0xa0a02d
    ctx->pc = 0x160f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f30: 0xffb20020
    ctx->pc = 0x160f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x160f34: 0x140982d
    ctx->pc = 0x160f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f38: 0xffb00000
    ctx->pc = 0x160f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160f3c: 0xffbf0090
    ctx->pc = 0x160f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x160f40: 0xe0802d
    ctx->pc = 0x160f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f44: 0xffb10010
    ctx->pc = 0x160f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x160f48: 0x8fb200a0
    ctx->pc = 0x160f48u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x160f4c: 0x1502000c
    ctx->pc = 0x160F4Cu;
    {
        const bool branch_taken_0x160f4c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x160F50u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 168)));
        if (branch_taken_0x160f4c) {
            ctx->pc = 0x160F80u;
            goto label_160f80;
        }
    }
    ctx->pc = 0x160F54u;
    // 0x160f54: 0x55200030
    ctx->pc = 0x160F54u;
    {
        const bool branch_taken_0x160f54 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        if (branch_taken_0x160f54) {
            ctx->pc = 0x160F58u;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x161018u;
            goto label_161018;
        }
    }
    ctx->pc = 0x160F5Cu;
    // 0x160f5c: 0x5640002e
    ctx->pc = 0x160F5Cu;
    {
        const bool branch_taken_0x160f5c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x160f5c) {
            ctx->pc = 0x160F60u;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x161018u;
            goto label_161018;
        }
    }
    ctx->pc = 0x160F64u;
    // 0x160f64: 0xc0585d4
    ctx->pc = 0x160F64u;
    SET_GPR_U32(ctx, 31, 0x160F6Cu);
    ctx->pc = 0x160F68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F6Cu; }
        else if (ctx->pc != 0x160F6Cu) { ctx->pc = 0x160F6Cu; }
    }
    if (ctx->pc != 0x160F6Cu) { return; }
    ctx->pc = 0x160F6Cu;
    // 0x160f6c: 0x101880
    ctx->pc = 0x160f6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x160f70: 0x7e1821
    ctx->pc = 0x160f70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x160f74: 0xac620008
    ctx->pc = 0x160f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x160f78: 0x10000026
    ctx->pc = 0x160F78u;
    {
        const bool branch_taken_0x160f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160F7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x160f78) {
            ctx->pc = 0x161014u;
            goto label_161014;
        }
    }
    ctx->pc = 0x160F80u;
label_160f80:
    // 0x160f80: 0x24040001
    ctx->pc = 0x160f80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f84: 0xc0585d4
    ctx->pc = 0x160F84u;
    SET_GPR_U32(ctx, 31, 0x160F8Cu);
    ctx->pc = 0x160F88u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 3));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160F8Cu; }
        else if (ctx->pc != 0x160F8Cu) { ctx->pc = 0x160F8Cu; }
    }
    if (ctx->pc != 0x160F8Cu) { return; }
    ctx->pc = 0x160F8Cu;
    // 0x160f8c: 0x108080
    ctx->pc = 0x160f8cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x160f90: 0x2d12021
    ctx->pc = 0x160f90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x160f94: 0x21e8021
    ctx->pc = 0x160f94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x160f98: 0x280282d
    ctx->pc = 0x160f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160f9c: 0xae020000
    ctx->pc = 0x160f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x160fa0: 0x260302d
    ctx->pc = 0x160fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fa4: 0x2a0382d
    ctx->pc = 0x160fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fa8: 0x240402d
    ctx->pc = 0x160fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fac: 0x2e0482d
    ctx->pc = 0x160facu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fb0: 0xc058420
    ctx->pc = 0x160FB0u;
    SET_GPR_U32(ctx, 31, 0x160FB8u);
    ctx->pc = 0x160FB4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161080u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x161080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FB8u; }
        else if (ctx->pc != 0x160FB8u) { ctx->pc = 0x160FB8u; }
    }
    if (ctx->pc != 0x160FB8u) { return; }
    ctx->pc = 0x160FB8u;
    // 0x160fb8: 0xc0585d4
    ctx->pc = 0x160FB8u;
    SET_GPR_U32(ctx, 31, 0x160FC0u);
    ctx->pc = 0x160FBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160FC0u; }
        else if (ctx->pc != 0x160FC0u) { ctx->pc = 0x160FC0u; }
    }
    if (ctx->pc != 0x160FC0u) { return; }
    ctx->pc = 0x160FC0u;
    // 0x160fc0: 0x26310010
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x160fc4: 0xae020008
    ctx->pc = 0x160fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x160fc8: 0x2d12021
    ctx->pc = 0x160fc8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x160fcc: 0x280282d
    ctx->pc = 0x160fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fd0: 0x260302d
    ctx->pc = 0x160fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fd4: 0x2a0382d
    ctx->pc = 0x160fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fd8: 0x240402d
    ctx->pc = 0x160fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fdc: 0x2e0482d
    ctx->pc = 0x160fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fe0: 0xdfbf0090
    ctx->pc = 0x160fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x160fe4: 0x502d
    ctx->pc = 0x160fe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fe8: 0xdfbe0080
    ctx->pc = 0x160fe8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160fec: 0xdfb70070
    ctx->pc = 0x160fecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160ff0: 0xdfb60060
    ctx->pc = 0x160ff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160ff4: 0xdfb50050
    ctx->pc = 0x160ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160ff8: 0xdfb40040
    ctx->pc = 0x160ff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160ffc: 0xdfb30030
    ctx->pc = 0x160ffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161000: 0xdfb20020
    ctx->pc = 0x161000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161004: 0xdfb10010
    ctx->pc = 0x161004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161008: 0xdfb00000
    ctx->pc = 0x161008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16100c: 0x8058420
    ctx->pc = 0x16100Cu;
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x161080u;
    _motionVector_0x161080(rdram, ctx, runtime); return;
    ctx->pc = 0x161014u;
label_161014:
    // 0x161014: 0x1080c0
    ctx->pc = 0x161014u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
label_161018:
    // 0x161018: 0x280282d
    ctx->pc = 0x161018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16101c: 0x2d08021
    ctx->pc = 0x16101cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x161020: 0x260302d
    ctx->pc = 0x161020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161024: 0x2a0382d
    ctx->pc = 0x161024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161028: 0x240402d
    ctx->pc = 0x161028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16102c: 0x2e0482d
    ctx->pc = 0x16102cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161030: 0x200202d
    ctx->pc = 0x161030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161034: 0xc058420
    ctx->pc = 0x161034u;
    SET_GPR_U32(ctx, 31, 0x16103Cu);
    ctx->pc = 0x161038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161080u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x161080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16103Cu; }
        else if (ctx->pc != 0x16103Cu) { ctx->pc = 0x16103Cu; }
    }
    if (ctx->pc != 0x16103Cu) { return; }
    ctx->pc = 0x16103Cu;
    // 0x16103c: 0x8e020000
    ctx->pc = 0x16103cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161040: 0x8e030004
    ctx->pc = 0x161040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161044: 0xae020010
    ctx->pc = 0x161044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x161048: 0xae030014
    ctx->pc = 0x161048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x16104c: 0xdfbf0090
    ctx->pc = 0x16104cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161050: 0xdfbe0080
    ctx->pc = 0x161050u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161054: 0xdfb70070
    ctx->pc = 0x161054u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161058: 0xdfb60060
    ctx->pc = 0x161058u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16105c: 0xdfb50050
    ctx->pc = 0x16105cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161060: 0xdfb40040
    ctx->pc = 0x161060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161064: 0xdfb30030
    ctx->pc = 0x161064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161068: 0xdfb20020
    ctx->pc = 0x161068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16106c: 0xdfb10010
    ctx->pc = 0x16106cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161070: 0xdfb00000
    ctx->pc = 0x161070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161074: 0x3e00008
    ctx->pc = 0x161074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161078u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160F80u: goto label_160f80;
            case 0x161014u: goto label_161014;
            case 0x161018u: goto label_161018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16107Cu;
}
