#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitDma
// Address: 0x2a5ae8 - 0x2a5be0
void pbInitDma_0x2a5ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5ae8u;

    // 0x2a5ae8: 0x27bdffd0
    ctx->pc = 0x2a5ae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5aec: 0xffbf0020
    ctx->pc = 0x2a5aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5af0: 0xffbe0010
    ctx->pc = 0x2a5af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a5af4: 0xffb00000
    ctx->pc = 0x2a5af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5af8: 0x3a0f02d
    ctx->pc = 0x2a5af8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5afc: 0x3c100036
    ctx->pc = 0x2a5afcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a5b00: 0x8e10dee0
    ctx->pc = 0x2a5b00u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a5b04: 0x3c020037
    ctx->pc = 0x2a5b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a5b08: 0x244280e0
    ctx->pc = 0x2a5b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934752));
    // 0x2a5b0c: 0xae020020
    ctx->pc = 0x2a5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2a5b10: 0x8e020020
    ctx->pc = 0x2a5b10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b14: 0x2403ffff
    ctx->pc = 0x2a5b14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5b18: 0xac4300b8
    ctx->pc = 0x2a5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
    // 0x2a5b1c: 0x8e020020
    ctx->pc = 0x2a5b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b20: 0x2403ffff
    ctx->pc = 0x2a5b20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5b24: 0xac4300bc
    ctx->pc = 0x2a5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    // 0x2a5b28: 0x8e020020
    ctx->pc = 0x2a5b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b2c: 0x2403ffff
    ctx->pc = 0x2a5b2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5b30: 0xac4300c0
    ctx->pc = 0x2a5b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x2a5b34: 0xc0a979a
    ctx->pc = 0x2A5B34u;
    SET_GPR_U32(ctx, 31, 0x2A5B3Cu);
    ctx->pc = 0x2A5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitDmaManager_0x2a5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B3Cu; }
    }
    if (ctx->pc != 0x2A5B3Cu) { return; }
    ctx->pc = 0x2A5B3Cu;
    // 0x2a5b3c: 0xc0a9726
    ctx->pc = 0x2A5B3Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B44u);
    ctx->pc = 0x2A5C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbOpenDmacHandler_0x2a5c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B44u; }
    }
    if (ctx->pc != 0x2A5B44u) { return; }
    ctx->pc = 0x2A5B44u;
    // 0x2a5b44: 0x8e020020
    ctx->pc = 0x2a5b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b48: 0xac400098
    ctx->pc = 0x2a5b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
    // 0x2a5b4c: 0x8e020020
    ctx->pc = 0x2a5b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b50: 0x3c03ffff
    ctx->pc = 0x2a5b50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2a5b54: 0x3463ffff
    ctx->pc = 0x2a5b54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2a5b58: 0xac43009c
    ctx->pc = 0x2a5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
    // 0x2a5b5c: 0x8e020020
    ctx->pc = 0x2a5b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b60: 0x3c03ffff
    ctx->pc = 0x2a5b60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2a5b64: 0x3463ffff
    ctx->pc = 0x2a5b64u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2a5b68: 0xac4300a4
    ctx->pc = 0x2a5b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
    // 0x2a5b6c: 0x8e020020
    ctx->pc = 0x2a5b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b70: 0x3c03ffff
    ctx->pc = 0x2a5b70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2a5b74: 0x3463ffff
    ctx->pc = 0x2a5b74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2a5b78: 0xac4300a8
    ctx->pc = 0x2a5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x2a5b7c: 0x8e020020
    ctx->pc = 0x2a5b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b80: 0x3c03ffff
    ctx->pc = 0x2a5b80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2a5b84: 0x3463ffff
    ctx->pc = 0x2a5b84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2a5b88: 0xac4300ac
    ctx->pc = 0x2a5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 3));
    // 0x2a5b8c: 0x8e020020
    ctx->pc = 0x2a5b8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5b90: 0x3c03ffff
    ctx->pc = 0x2a5b90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2a5b94: 0x3463ffff
    ctx->pc = 0x2a5b94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2a5b98: 0xac4300b0
    ctx->pc = 0x2a5b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    // 0x2a5b9c: 0x8e020020
    ctx->pc = 0x2a5b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5ba0: 0x3c03ffff
    ctx->pc = 0x2a5ba0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2a5ba4: 0x3463ffff
    ctx->pc = 0x2a5ba4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2a5ba8: 0xac4300b4
    ctx->pc = 0x2a5ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
    // 0x2a5bac: 0xc0b85c4
    ctx->pc = 0x2A5BACu;
    SET_GPR_U32(ctx, 31, 0x2A5BB4u);
    ctx->pc = 0x2E1710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsGetIMR_0x2e1710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5BB4u; }
    }
    if (ctx->pc != 0x2A5BB4u) { return; }
    ctx->pc = 0x2A5BB4u;
    // 0x2a5bb4: 0x8e030020
    ctx->pc = 0x2a5bb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5bb8: 0x2103c
    ctx->pc = 0x2a5bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a5bbc: 0x2103f
    ctx->pc = 0x2a5bbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a5bc0: 0xac6200a0
    ctx->pc = 0x2a5bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x2a5bc4: 0x3c0e82d
    ctx->pc = 0x2a5bc4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bc8: 0xdfbf0020
    ctx->pc = 0x2a5bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5bcc: 0xdfbe0010
    ctx->pc = 0x2a5bccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5bd0: 0xdfb00000
    ctx->pc = 0x2a5bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5bd4: 0x27bd0030
    ctx->pc = 0x2a5bd4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5bd8: 0x3e00008
    ctx->pc = 0x2A5BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5BE0u;
}
