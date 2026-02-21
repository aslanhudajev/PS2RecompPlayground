#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbNextTexPage
// Address: 0x2a8898 - 0x2a8ad8
void pbNextTexPage_0x2a8898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8898u;

    // 0x2a8898: 0x27bdffb0
    ctx->pc = 0x2a8898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a889c: 0xffbe0040
    ctx->pc = 0x2a889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2a88a0: 0x3a0f02d
    ctx->pc = 0x2a88a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88a4: 0x3c020036
    ctx->pc = 0x2a88a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a88a8: 0x8c42dee0
    ctx->pc = 0x2a88a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a88ac: 0x8c43002c
    ctx->pc = 0x2a88acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a88b0: 0x8c640074
    ctx->pc = 0x2a88b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2a88b4: 0x10800003
    ctx->pc = 0x2A88B4u;
    {
        const bool branch_taken_0x2a88b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a88b4) {
            ctx->pc = 0x2A88C4u;
            goto label_2a88c4;
        }
    }
    ctx->pc = 0x2A88BCu;
    // 0x2a88bc: 0x10000081
    ctx->pc = 0x2A88BCu;
    {
        const bool branch_taken_0x2a88bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a88bc) {
            ctx->pc = 0x2A8AC4u;
            goto label_2a8ac4;
        }
    }
    ctx->pc = 0x2A88C4u;
label_2a88c4:
    // 0x2a88c4: 0x3c030037
    ctx->pc = 0x2a88c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a88c8: 0x8c6385e0
    ctx->pc = 0x2a88c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294936032)));
    // 0x2a88cc: 0x3c010037
    ctx->pc = 0x2a88ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a88d0: 0xac2385e4
    ctx->pc = 0x2a88d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936036), GPR_U32(ctx, 3));
    // 0x2a88d4: 0x3c040037
    ctx->pc = 0x2a88d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2a88d8: 0x8c8485e0
    ctx->pc = 0x2a88d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294936032)));
    // 0x2a88dc: 0x24830001
    ctx->pc = 0x2a88dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a88e0: 0x60202d
    ctx->pc = 0x2a88e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88e4: 0x3c010037
    ctx->pc = 0x2a88e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a88e8: 0xac2485e0
    ctx->pc = 0x2a88e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936032), GPR_U32(ctx, 4));
    // 0x2a88ec: 0x28830002
    ctx->pc = 0x2a88ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
    // 0x2a88f0: 0x14600003
    ctx->pc = 0x2A88F0u;
    {
        const bool branch_taken_0x2a88f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a88f0) {
            ctx->pc = 0x2A8900u;
            goto label_2a8900;
        }
    }
    ctx->pc = 0x2A88F8u;
    // 0x2a88f8: 0x3c010037
    ctx->pc = 0x2a88f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a88fc: 0xac2085e0
    ctx->pc = 0x2a88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936032), GPR_U32(ctx, 0));
label_2a8900:
    // 0x2a8900: 0x3c030037
    ctx->pc = 0x2a8900u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8904: 0x8c6385e0
    ctx->pc = 0x2a8904u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294936032)));
    // 0x2a8908: 0x460005e
    ctx->pc = 0x2A8908u;
    {
        const bool branch_taken_0x2a8908 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a8908) {
            ctx->pc = 0x2A8A84u;
            goto label_2a8a84;
        }
    }
    ctx->pc = 0x2A8910u;
    // 0x2a8910: 0x24030001
    ctx->pc = 0x2a8910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8914: 0x3c040037
    ctx->pc = 0x2a8914u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2a8918: 0x8c8485e0
    ctx->pc = 0x2a8918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294936032)));
    // 0x2a891c: 0x831804
    ctx->pc = 0x2a891cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2a8920: 0xa3c30014
    ctx->pc = 0x2a8920u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a8924: 0x93c40014
    ctx->pc = 0x2a8924u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a8928: 0x41e00
    ctx->pc = 0x2a8928u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 24));
    // 0x2a892c: 0x93c40014
    ctx->pc = 0x2a892cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a8930: 0x42c00
    ctx->pc = 0x2a8930u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a8934: 0x651825
    ctx->pc = 0x2a8934u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a8938: 0x93c40014
    ctx->pc = 0x2a8938u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a893c: 0x42a00
    ctx->pc = 0x2a893cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
    // 0x2a8940: 0x651825
    ctx->pc = 0x2a8940u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a8944: 0x93c40014
    ctx->pc = 0x2a8944u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a8948: 0x641825
    ctx->pc = 0x2a8948u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a894c: 0x32027
    ctx->pc = 0x2a894cu;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2a8950: 0xafc40020
    ctx->pc = 0x2a8950u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 4));
    // 0x2a8954: 0x8fc30020
    ctx->pc = 0x2a8954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a8958: 0xafc30024
    ctx->pc = 0x2a8958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 3));
    // 0x2a895c: 0xdfc30020
    ctx->pc = 0x2a895cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a8960: 0xffc30030
    ctx->pc = 0x2a8960u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 48), GPR_U64(ctx, 3));
    // 0x2a8964: 0xafc00004
    ctx->pc = 0x2a8964u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_2a8968:
    // 0x2a8968: 0x8c430038
    ctx->pc = 0x2a8968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2a896c: 0x8fc40004
    ctx->pc = 0x2a896cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8970: 0x8c630000
    ctx->pc = 0x2a8970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8974: 0x83202a
    ctx->pc = 0x2a8974u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x2a8978: 0x14800003
    ctx->pc = 0x2A8978u;
    {
        const bool branch_taken_0x2a8978 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8978) {
            ctx->pc = 0x2A8988u;
            goto label_2a8988;
        }
    }
    ctx->pc = 0x2A8980u;
    // 0x2a8980: 0x10000040
    ctx->pc = 0x2A8980u;
    {
        const bool branch_taken_0x2a8980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8980) {
            ctx->pc = 0x2A8A84u;
            goto label_2a8a84;
        }
    }
    ctx->pc = 0x2A8988u;
label_2a8988:
    // 0x2a8988: 0x8fc30004
    ctx->pc = 0x2a8988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a898c: 0x60202d
    ctx->pc = 0x2a898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8990: 0x41900
    ctx->pc = 0x2a8990u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a8994: 0x24640004
    ctx->pc = 0x2a8994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a8998: 0x8c430038
    ctx->pc = 0x2a8998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2a899c: 0x642021
    ctx->pc = 0x2a899cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a89a0: 0xafc40000
    ctx->pc = 0x2a89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a89a4: 0x8fc30000
    ctx->pc = 0x2a89a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a89a8: 0x8c64000c
    ctx->pc = 0x2a89a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a89ac: 0x14800008
    ctx->pc = 0x2A89ACu;
    {
        const bool branch_taken_0x2a89ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a89ac) {
            ctx->pc = 0x2A89D0u;
            goto label_2a89d0;
        }
    }
    ctx->pc = 0x2A89B4u;
    // 0x2a89b4: 0x8fc30000
    ctx->pc = 0x2a89b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a89b8: 0x8c640000
    ctx->pc = 0x2a89b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a89bc: 0x8c830048
    ctx->pc = 0x2a89bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2a89c0: 0x14600005
    ctx->pc = 0x2A89C0u;
    {
        const bool branch_taken_0x2a89c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a89c0) {
            ctx->pc = 0x2A89D8u;
            goto label_2a89d8;
        }
    }
    ctx->pc = 0x2A89C8u;
    // 0x2a89c8: 0x10000001
    ctx->pc = 0x2A89C8u;
    {
        const bool branch_taken_0x2a89c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a89c8) {
            ctx->pc = 0x2A89D0u;
            goto label_2a89d0;
        }
    }
    ctx->pc = 0x2A89D0u;
label_2a89d0:
    // 0x2a89d0: 0x10000027
    ctx->pc = 0x2A89D0u;
    {
        const bool branch_taken_0x2a89d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a89d0) {
            ctx->pc = 0x2A8A70u;
            goto label_2a8a70;
        }
    }
    ctx->pc = 0x2A89D8u;
label_2a89d8:
    // 0x2a89d8: 0x8fc30000
    ctx->pc = 0x2a89d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a89dc: 0x8c640000
    ctx->pc = 0x2a89dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a89e0: 0x8c850048
    ctx->pc = 0x2a89e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2a89e4: 0x24a30007
    ctx->pc = 0x2a89e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 7));
    // 0x2a89e8: 0x320c2
    ctx->pc = 0x2a89e8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 3));
    // 0x2a89ec: 0xafc4000c
    ctx->pc = 0x2a89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 4));
    // 0x2a89f0: 0x8fc30000
    ctx->pc = 0x2a89f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a89f4: 0x8c640000
    ctx->pc = 0x2a89f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a89f8: 0x8c830078
    ctx->pc = 0x2a89f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a89fc: 0xafc30038
    ctx->pc = 0x2a89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 3));
    // 0x2a8a00: 0xafc00008
    ctx->pc = 0x2a8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x2a8a04: 0x0
    ctx->pc = 0x2a8a04u;
    // NOP
label_2a8a08:
    // 0x2a8a08: 0x8fc30008
    ctx->pc = 0x2a8a08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8a0c: 0x8fc4000c
    ctx->pc = 0x2a8a0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a8a10: 0x64182a
    ctx->pc = 0x2a8a10u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x2a8a14: 0x14600003
    ctx->pc = 0x2A8A14u;
    {
        const bool branch_taken_0x2a8a14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8a14) {
            ctx->pc = 0x2A8A24u;
            goto label_2a8a24;
        }
    }
    ctx->pc = 0x2A8A1Cu;
    // 0x2a8a1c: 0x10000014
    ctx->pc = 0x2A8A1Cu;
    {
        const bool branch_taken_0x2a8a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8a1c) {
            ctx->pc = 0x2A8A70u;
            goto label_2a8a70;
        }
    }
    ctx->pc = 0x2A8A24u;
label_2a8a24:
    // 0x2a8a24: 0x8fc30008
    ctx->pc = 0x2a8a24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8a28: 0x60202d
    ctx->pc = 0x2a8a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a2c: 0x418c0
    ctx->pc = 0x2a8a2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a8a30: 0x8fc40038
    ctx->pc = 0x2a8a30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x2a8a34: 0x641821
    ctx->pc = 0x2a8a34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a8a38: 0x8fc40008
    ctx->pc = 0x2a8a38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8a3c: 0x80282d
    ctx->pc = 0x2a8a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a40: 0x520c0
    ctx->pc = 0x2a8a40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a8a44: 0x8fc50038
    ctx->pc = 0x2a8a44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x2a8a48: 0x852021
    ctx->pc = 0x2a8a48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a8a4c: 0xdc850000
    ctx->pc = 0x2a8a4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a8a50: 0xdfc40030
    ctx->pc = 0x2a8a50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x2a8a54: 0xa42824
    ctx->pc = 0x2a8a54u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a8a58: 0xfc650000
    ctx->pc = 0x2a8a58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2a8a5c: 0x8fc30008
    ctx->pc = 0x2a8a5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8a60: 0x24640001
    ctx->pc = 0x2a8a60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8a64: 0xafc40008
    ctx->pc = 0x2a8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 4));
    // 0x2a8a68: 0x1000ffe7
    ctx->pc = 0x2A8A68u;
    {
        const bool branch_taken_0x2a8a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8a68) {
            ctx->pc = 0x2A8A08u;
            goto label_2a8a08;
        }
    }
    ctx->pc = 0x2A8A70u;
label_2a8a70:
    // 0x2a8a70: 0x8fc30004
    ctx->pc = 0x2a8a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8a74: 0x24640001
    ctx->pc = 0x2a8a74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8a78: 0xafc40004
    ctx->pc = 0x2a8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
    // 0x2a8a7c: 0x1000ffba
    ctx->pc = 0x2A8A7Cu;
    {
        const bool branch_taken_0x2a8a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8a7c) {
            ctx->pc = 0x2A8968u;
            goto label_2a8968;
        }
    }
    ctx->pc = 0x2A8A84u;
label_2a8a84:
    // 0x2a8a84: 0x3c030037
    ctx->pc = 0x2a8a84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8a88: 0x8c6385e0
    ctx->pc = 0x2a8a88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294936032)));
    // 0x2a8a8c: 0x60202d
    ctx->pc = 0x2a8a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a90: 0x41880
    ctx->pc = 0x2a8a90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a8a94: 0x3c040037
    ctx->pc = 0x2a8a94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2a8a98: 0x24848a98
    ctx->pc = 0x2a8a98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937240));
    // 0x2a8a9c: 0x831821
    ctx->pc = 0x2a8a9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a8aa0: 0x3c040037
    ctx->pc = 0x2a8aa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2a8aa4: 0x8c8485e0
    ctx->pc = 0x2a8aa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294936032)));
    // 0x2a8aa8: 0x80282d
    ctx->pc = 0x2a8aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8aac: 0x52080
    ctx->pc = 0x2a8aacu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8ab0: 0x3c050037
    ctx->pc = 0x2a8ab0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2a8ab4: 0x24a58a90
    ctx->pc = 0x2a8ab4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937232));
    // 0x2a8ab8: 0xa42021
    ctx->pc = 0x2a8ab8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a8abc: 0x8c850000
    ctx->pc = 0x2a8abcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a8ac0: 0xac650000
    ctx->pc = 0x2a8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_2a8ac4:
    // 0x2a8ac4: 0x3c0e82d
    ctx->pc = 0x2a8ac4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ac8: 0xdfbe0040
    ctx->pc = 0x2a8ac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8acc: 0x27bd0050
    ctx->pc = 0x2a8accu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8ad0: 0x3e00008
    ctx->pc = 0x2A8AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A88C4u: goto label_2a88c4;
            case 0x2A8900u: goto label_2a8900;
            case 0x2A8968u: goto label_2a8968;
            case 0x2A8988u: goto label_2a8988;
            case 0x2A89D0u: goto label_2a89d0;
            case 0x2A89D8u: goto label_2a89d8;
            case 0x2A8A08u: goto label_2a8a08;
            case 0x2A8A24u: goto label_2a8a24;
            case 0x2A8A70u: goto label_2a8a70;
            case 0x2A8A84u: goto label_2a8a84;
            case 0x2A8AC4u: goto label_2a8ac4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8AD8u;
}
