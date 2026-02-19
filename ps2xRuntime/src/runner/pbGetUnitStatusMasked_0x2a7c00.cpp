#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetUnitStatusMasked
// Address: 0x2a7c00 - 0x2a7f84
void pbGetUnitStatusMasked_0x2a7c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a7c00u;

    // 0x2a7c00: 0x27bdff80
    ctx->pc = 0x2a7c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a7c04: 0xffbf0070
    ctx->pc = 0x2a7c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a7c08: 0xffbe0060
    ctx->pc = 0x2a7c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2a7c0c: 0xffb00050
    ctx->pc = 0x2a7c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2a7c10: 0x3a0f02d
    ctx->pc = 0x2a7c10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c14: 0xafc40000
    ctx->pc = 0x2a7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a7c18: 0x3c100036
    ctx->pc = 0x2a7c18u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a7c1c: 0x8e10dee0
    ctx->pc = 0x2a7c1cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a7c20: 0xafc00004
    ctx->pc = 0x2a7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x2a7c24: 0x8fc30000
    ctx->pc = 0x2a7c24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7c28: 0x3062ffc0
    ctx->pc = 0x2a7c28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65472));
    // 0x2a7c2c: 0x1040007c
    ctx->pc = 0x2A7C2Cu;
    {
        const bool branch_taken_0x2a7c2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7c2c) {
            ctx->pc = 0x2A7E20u;
            goto label_2a7e20;
        }
    }
    ctx->pc = 0x2A7C34u;
    // 0x2a7c34: 0x3c021001
    ctx->pc = 0x2a7c34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c38: 0x8c428000
    ctx->pc = 0x2a7c38u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294934528))); // MMIO: 0x10008000
    // 0x2a7c3c: 0xafc20008
    ctx->pc = 0x2a7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2a7c40: 0x3c021001
    ctx->pc = 0x2a7c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c44: 0x8c429000
    ctx->pc = 0x2a7c44u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294938624))); // MMIO: 0x10009000
    // 0x2a7c48: 0xafc2000c
    ctx->pc = 0x2a7c48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a7c4c: 0x3c021001
    ctx->pc = 0x2a7c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c50: 0x8c42a000
    ctx->pc = 0x2a7c50u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x2a7c54: 0xafc20010
    ctx->pc = 0x2a7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x2a7c58: 0x8fc30000
    ctx->pc = 0x2a7c58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7c5c: 0x3062fe00
    ctx->pc = 0x2a7c5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65024));
    // 0x2a7c60: 0x10400047
    ctx->pc = 0x2A7C60u;
    {
        const bool branch_taken_0x2a7c60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7c60) {
            ctx->pc = 0x2A7D80u;
            goto label_2a7d80;
        }
    }
    ctx->pc = 0x2A7C68u;
    // 0x2a7c68: 0x3c021001
    ctx->pc = 0x2a7c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c6c: 0x8c42b000
    ctx->pc = 0x2a7c6cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294946816))); // MMIO: 0x1000b000
    // 0x2a7c70: 0xafc20014
    ctx->pc = 0x2a7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x2a7c74: 0x3c021001
    ctx->pc = 0x2a7c74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c78: 0x8c42b400
    ctx->pc = 0x2a7c78u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294947840))); // MMIO: 0x1000b400
    // 0x2a7c7c: 0xafc20018
    ctx->pc = 0x2a7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x2a7c80: 0x3c021001
    ctx->pc = 0x2a7c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c84: 0x8c42c000
    ctx->pc = 0x2a7c84u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294950912))); // MMIO: 0x1000c000
    // 0x2a7c88: 0xafc2001c
    ctx->pc = 0x2a7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x2a7c8c: 0x3c021001
    ctx->pc = 0x2a7c8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c90: 0x8c42c400
    ctx->pc = 0x2a7c90u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294951936))); // MMIO: 0x1000c400
    // 0x2a7c94: 0xafc20020
    ctx->pc = 0x2a7c94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x2a7c98: 0x3c021001
    ctx->pc = 0x2a7c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7c9c: 0x8c42c800
    ctx->pc = 0x2a7c9cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294952960))); // MMIO: 0x1000c800
    // 0x2a7ca0: 0xafc20024
    ctx->pc = 0x2a7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x2a7ca4: 0x3c021001
    ctx->pc = 0x2a7ca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7ca8: 0x8c42d000
    ctx->pc = 0x2a7ca8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294955008))); // MMIO: 0x1000d000
    // 0x2a7cac: 0xafc20028
    ctx->pc = 0x2a7cacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x2a7cb0: 0x3c021001
    ctx->pc = 0x2a7cb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7cb4: 0x8c42d400
    ctx->pc = 0x2a7cb4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294956032))); // MMIO: 0x1000d400
    // 0x2a7cb8: 0xafc2002c
    ctx->pc = 0x2a7cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x2a7cbc: 0x8fc20004
    ctx->pc = 0x2a7cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7cc0: 0x8fc40014
    ctx->pc = 0x2a7cc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7cc4: 0x30830100
    ctx->pc = 0x2a7cc4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7cc8: 0x10600002
    ctx->pc = 0x2A7CC8u;
    {
        const bool branch_taken_0x2a7cc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7cc8) {
            ctx->pc = 0x2A7CD4u;
            goto label_2a7cd4;
        }
    }
    ctx->pc = 0x2A7CD0u;
    // 0x2a7cd0: 0x34420200
    ctx->pc = 0x2a7cd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 512));
label_2a7cd4:
    // 0x2a7cd4: 0xafc20004
    ctx->pc = 0x2a7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7cd8: 0x8fc20004
    ctx->pc = 0x2a7cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7cdc: 0x8fc40018
    ctx->pc = 0x2a7cdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a7ce0: 0x30830100
    ctx->pc = 0x2a7ce0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7ce4: 0x10600002
    ctx->pc = 0x2A7CE4u;
    {
        const bool branch_taken_0x2a7ce4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7ce4) {
            ctx->pc = 0x2A7CF0u;
            goto label_2a7cf0;
        }
    }
    ctx->pc = 0x2A7CECu;
    // 0x2a7cec: 0x34420400
    ctx->pc = 0x2a7cecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
label_2a7cf0:
    // 0x2a7cf0: 0xafc20004
    ctx->pc = 0x2a7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7cf4: 0x8fc20004
    ctx->pc = 0x2a7cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7cf8: 0x8fc4001c
    ctx->pc = 0x2a7cf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2a7cfc: 0x30830100
    ctx->pc = 0x2a7cfcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7d00: 0x10600002
    ctx->pc = 0x2A7D00u;
    {
        const bool branch_taken_0x2a7d00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7d00) {
            ctx->pc = 0x2A7D0Cu;
            goto label_2a7d0c;
        }
    }
    ctx->pc = 0x2A7D08u;
    // 0x2a7d08: 0x34420800
    ctx->pc = 0x2a7d08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_2a7d0c:
    // 0x2a7d0c: 0xafc20004
    ctx->pc = 0x2a7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7d10: 0x8fc20004
    ctx->pc = 0x2a7d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7d14: 0x8fc40020
    ctx->pc = 0x2a7d14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7d18: 0x30830100
    ctx->pc = 0x2a7d18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7d1c: 0x10600002
    ctx->pc = 0x2A7D1Cu;
    {
        const bool branch_taken_0x2a7d1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7d1c) {
            ctx->pc = 0x2A7D28u;
            goto label_2a7d28;
        }
    }
    ctx->pc = 0x2A7D24u;
    // 0x2a7d24: 0x34421000
    ctx->pc = 0x2a7d24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
label_2a7d28:
    // 0x2a7d28: 0xafc20004
    ctx->pc = 0x2a7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7d2c: 0x8fc20004
    ctx->pc = 0x2a7d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7d30: 0x8fc40024
    ctx->pc = 0x2a7d30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7d34: 0x30830100
    ctx->pc = 0x2a7d34u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7d38: 0x10600002
    ctx->pc = 0x2A7D38u;
    {
        const bool branch_taken_0x2a7d38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7d38) {
            ctx->pc = 0x2A7D44u;
            goto label_2a7d44;
        }
    }
    ctx->pc = 0x2A7D40u;
    // 0x2a7d40: 0x34422000
    ctx->pc = 0x2a7d40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
label_2a7d44:
    // 0x2a7d44: 0xafc20004
    ctx->pc = 0x2a7d44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7d48: 0x8fc20004
    ctx->pc = 0x2a7d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7d4c: 0x8fc40028
    ctx->pc = 0x2a7d4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a7d50: 0x30830100
    ctx->pc = 0x2a7d50u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7d54: 0x10600002
    ctx->pc = 0x2A7D54u;
    {
        const bool branch_taken_0x2a7d54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7d54) {
            ctx->pc = 0x2A7D60u;
            goto label_2a7d60;
        }
    }
    ctx->pc = 0x2A7D5Cu;
    // 0x2a7d5c: 0x34424000
    ctx->pc = 0x2a7d5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
label_2a7d60:
    // 0x2a7d60: 0xafc20004
    ctx->pc = 0x2a7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7d64: 0x8fc20004
    ctx->pc = 0x2a7d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7d68: 0x8fc4002c
    ctx->pc = 0x2a7d68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x2a7d6c: 0x30830100
    ctx->pc = 0x2a7d6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7d70: 0x10600002
    ctx->pc = 0x2A7D70u;
    {
        const bool branch_taken_0x2a7d70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7d70) {
            ctx->pc = 0x2A7D7Cu;
            goto label_2a7d7c;
        }
    }
    ctx->pc = 0x2A7D78u;
    // 0x2a7d78: 0x34428000
    ctx->pc = 0x2a7d78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
label_2a7d7c:
    // 0x2a7d7c: 0xafc20004
    ctx->pc = 0x2a7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a7d80:
    // 0x2a7d80: 0x8fc20004
    ctx->pc = 0x2a7d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7d84: 0x8e030020
    ctx->pc = 0x2a7d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a7d88: 0x8c64001c
    ctx->pc = 0x2a7d88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2a7d8c: 0x10800002
    ctx->pc = 0x2A7D8Cu;
    {
        const bool branch_taken_0x2a7d8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7d8c) {
            ctx->pc = 0x2A7D98u;
            goto label_2a7d98;
        }
    }
    ctx->pc = 0x2A7D94u;
    // 0x2a7d94: 0x34420040
    ctx->pc = 0x2a7d94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
label_2a7d98:
    // 0x2a7d98: 0xafc20004
    ctx->pc = 0x2a7d98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7d9c: 0x8fc20004
    ctx->pc = 0x2a7d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7da0: 0x8e030020
    ctx->pc = 0x2a7da0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a7da4: 0x8c640034
    ctx->pc = 0x2a7da4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a7da8: 0x10800002
    ctx->pc = 0x2A7DA8u;
    {
        const bool branch_taken_0x2a7da8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7da8) {
            ctx->pc = 0x2A7DB4u;
            goto label_2a7db4;
        }
    }
    ctx->pc = 0x2A7DB0u;
    // 0x2a7db0: 0x34420080
    ctx->pc = 0x2a7db0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
label_2a7db4:
    // 0x2a7db4: 0xafc20004
    ctx->pc = 0x2a7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7db8: 0x8fc20004
    ctx->pc = 0x2a7db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7dbc: 0x8e030020
    ctx->pc = 0x2a7dbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a7dc0: 0x8c64004c
    ctx->pc = 0x2a7dc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2a7dc4: 0x10800002
    ctx->pc = 0x2A7DC4u;
    {
        const bool branch_taken_0x2a7dc4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7dc4) {
            ctx->pc = 0x2A7DD0u;
            goto label_2a7dd0;
        }
    }
    ctx->pc = 0x2A7DCCu;
    // 0x2a7dcc: 0x34420100
    ctx->pc = 0x2a7dccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
label_2a7dd0:
    // 0x2a7dd0: 0xafc20004
    ctx->pc = 0x2a7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7dd4: 0x8fc20004
    ctx->pc = 0x2a7dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7dd8: 0x8fc40008
    ctx->pc = 0x2a7dd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7ddc: 0x30830100
    ctx->pc = 0x2a7ddcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7de0: 0x10600002
    ctx->pc = 0x2A7DE0u;
    {
        const bool branch_taken_0x2a7de0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7de0) {
            ctx->pc = 0x2A7DECu;
            goto label_2a7dec;
        }
    }
    ctx->pc = 0x2A7DE8u;
    // 0x2a7de8: 0x34420040
    ctx->pc = 0x2a7de8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
label_2a7dec:
    // 0x2a7dec: 0xafc20004
    ctx->pc = 0x2a7decu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7df0: 0x8fc20004
    ctx->pc = 0x2a7df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7df4: 0x8fc4000c
    ctx->pc = 0x2a7df4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7df8: 0x30830100
    ctx->pc = 0x2a7df8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7dfc: 0x10600002
    ctx->pc = 0x2A7DFCu;
    {
        const bool branch_taken_0x2a7dfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7dfc) {
            ctx->pc = 0x2A7E08u;
            goto label_2a7e08;
        }
    }
    ctx->pc = 0x2A7E04u;
    // 0x2a7e04: 0x34420080
    ctx->pc = 0x2a7e04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
label_2a7e08:
    // 0x2a7e08: 0xafc20004
    ctx->pc = 0x2a7e08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7e0c: 0x8fc30010
    ctx->pc = 0x2a7e0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7e10: 0x30620100
    ctx->pc = 0x2a7e10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x2a7e14: 0x8fc30004
    ctx->pc = 0x2a7e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7e18: 0x621025
    ctx->pc = 0x2a7e18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7e1c: 0xafc20004
    ctx->pc = 0x2a7e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a7e20:
    // 0x2a7e20: 0x8fc30000
    ctx->pc = 0x2a7e20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7e24: 0x3062003f
    ctx->pc = 0x2a7e24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
    // 0x2a7e28: 0x10400049
    ctx->pc = 0x2A7E28u;
    {
        const bool branch_taken_0x2a7e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7e28) {
            ctx->pc = 0x2A7F50u;
            goto label_2a7f50;
        }
    }
    ctx->pc = 0x2A7E30u;
    // 0x2a7e30: 0x8fc30000
    ctx->pc = 0x2a7e30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7e34: 0x30620018
    ctx->pc = 0x2a7e34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 24));
    // 0x2a7e38: 0x10400012
    ctx->pc = 0x2A7E38u;
    {
        const bool branch_taken_0x2a7e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7e38) {
            ctx->pc = 0x2A7E84u;
            goto label_2a7e84;
        }
    }
    ctx->pc = 0x2A7E40u;
    // 0x2a7e40: 0xc0ace26
    ctx->pc = 0x2A7E40u;
    SET_GPR_U32(ctx, 31, 0x2A7E48u);
    ctx->pc = 0x2B3898u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuStat_0x2b3898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E48u; }
    }
    if (ctx->pc != 0x2A7E48u) { return; }
    ctx->pc = 0x2A7E48u;
    // 0x2a7e48: 0xafc20038
    ctx->pc = 0x2a7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x2a7e4c: 0x8fc20004
    ctx->pc = 0x2a7e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7e50: 0x8fc40038
    ctx->pc = 0x2a7e50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x2a7e54: 0x3083000f
    ctx->pc = 0x2a7e54u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 15));
    // 0x2a7e58: 0x10600002
    ctx->pc = 0x2A7E58u;
    {
        const bool branch_taken_0x2a7e58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7e58) {
            ctx->pc = 0x2A7E64u;
            goto label_2a7e64;
        }
    }
    ctx->pc = 0x2A7E60u;
    // 0x2a7e60: 0x34420008
    ctx->pc = 0x2a7e60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
label_2a7e64:
    // 0x2a7e64: 0xafc20004
    ctx->pc = 0x2a7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7e68: 0x8fc20004
    ctx->pc = 0x2a7e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7e6c: 0x8fc40038
    ctx->pc = 0x2a7e6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x2a7e70: 0x30830f00
    ctx->pc = 0x2a7e70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 3840));
    // 0x2a7e74: 0x10600002
    ctx->pc = 0x2A7E74u;
    {
        const bool branch_taken_0x2a7e74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7e74) {
            ctx->pc = 0x2A7E80u;
            goto label_2a7e80;
        }
    }
    ctx->pc = 0x2A7E7Cu;
    // 0x2a7e7c: 0x34420010
    ctx->pc = 0x2a7e7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
label_2a7e80:
    // 0x2a7e80: 0xafc20004
    ctx->pc = 0x2a7e80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a7e84:
    // 0x2a7e84: 0x8fc30000
    ctx->pc = 0x2a7e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7e88: 0x30620001
    ctx->pc = 0x2a7e88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a7e8c: 0x1040000a
    ctx->pc = 0x2A7E8Cu;
    {
        const bool branch_taken_0x2a7e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7e8c) {
            ctx->pc = 0x2A7EB8u;
            goto label_2a7eb8;
        }
    }
    ctx->pc = 0x2A7E94u;
    // 0x2a7e94: 0x3c021000
    ctx->pc = 0x2a7e94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a7e98: 0x8c423800
    ctx->pc = 0x2a7e98u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 14336))); // MMIO: 0x10003800
    // 0x2a7e9c: 0xafc20030
    ctx->pc = 0x2a7e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x2a7ea0: 0x8fc30030
    ctx->pc = 0x2a7ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x2a7ea4: 0x30620003
    ctx->pc = 0x2a7ea4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a7ea8: 0x2102b
    ctx->pc = 0x2a7ea8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2a7eac: 0x8fc30004
    ctx->pc = 0x2a7eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7eb0: 0x431025
    ctx->pc = 0x2a7eb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7eb4: 0xafc20004
    ctx->pc = 0x2a7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a7eb8:
    // 0x2a7eb8: 0x8fc30000
    ctx->pc = 0x2a7eb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7ebc: 0x30620001
    ctx->pc = 0x2a7ebcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a7ec0: 0x10400023
    ctx->pc = 0x2A7EC0u;
    {
        const bool branch_taken_0x2a7ec0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7ec0) {
            ctx->pc = 0x2A7F50u;
            goto label_2a7f50;
        }
    }
    ctx->pc = 0x2A7EC8u;
    // 0x2a7ec8: 0x3c021000
    ctx->pc = 0x2a7ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a7ecc: 0x8c423c00
    ctx->pc = 0x2a7eccu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15360))); // MMIO: 0x10003c00
    // 0x2a7ed0: 0xafc20034
    ctx->pc = 0x2a7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x2a7ed4: 0x3c021000
    ctx->pc = 0x2a7ed4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a7ed8: 0x8c423020
    ctx->pc = 0x2a7ed8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 12320))); // MMIO: 0x10003020
    // 0x2a7edc: 0xafc20040
    ctx->pc = 0x2a7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x2a7ee0: 0x3c021200
    ctx->pc = 0x2a7ee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x2a7ee4: 0xdc421000
    ctx->pc = 0x2a7ee4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x2a7ee8: 0x2183c
    ctx->pc = 0x2a7ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a7eec: 0x3183f
    ctx->pc = 0x2a7eecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a7ef0: 0xafc30044
    ctx->pc = 0x2a7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x2a7ef4: 0x8fc20004
    ctx->pc = 0x2a7ef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7ef8: 0x8fc40034
    ctx->pc = 0x2a7ef8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x2a7efc: 0x30830003
    ctx->pc = 0x2a7efcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 3));
    // 0x2a7f00: 0x10600002
    ctx->pc = 0x2A7F00u;
    {
        const bool branch_taken_0x2a7f00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7f00) {
            ctx->pc = 0x2A7F0Cu;
            goto label_2a7f0c;
        }
    }
    ctx->pc = 0x2A7F08u;
    // 0x2a7f08: 0x34420002
    ctx->pc = 0x2a7f08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_2a7f0c:
    // 0x2a7f0c: 0xafc20004
    ctx->pc = 0x2a7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7f10: 0x8fc20004
    ctx->pc = 0x2a7f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7f14: 0x8fc40040
    ctx->pc = 0x2a7f14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x2a7f18: 0x30830608
    ctx->pc = 0x2a7f18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1544));
    // 0x2a7f1c: 0x10600002
    ctx->pc = 0x2A7F1Cu;
    {
        const bool branch_taken_0x2a7f1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7f1c) {
            ctx->pc = 0x2A7F28u;
            goto label_2a7f28;
        }
    }
    ctx->pc = 0x2A7F24u;
    // 0x2a7f24: 0x34420004
    ctx->pc = 0x2a7f24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
label_2a7f28:
    // 0x2a7f28: 0xafc20004
    ctx->pc = 0x2a7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7f2c: 0x8fc20004
    ctx->pc = 0x2a7f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7f30: 0x8fc40044
    ctx->pc = 0x2a7f30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x2a7f34: 0x41b82
    ctx->pc = 0x2a7f34u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 14));
    // 0x2a7f38: 0x30640003
    ctx->pc = 0x2a7f38u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a7f3c: 0x24030001
    ctx->pc = 0x2a7f3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f40: 0x10830002
    ctx->pc = 0x2A7F40u;
    {
        const bool branch_taken_0x2a7f40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2a7f40) {
            ctx->pc = 0x2A7F4Cu;
            goto label_2a7f4c;
        }
    }
    ctx->pc = 0x2A7F48u;
    // 0x2a7f48: 0x34420020
    ctx->pc = 0x2a7f48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
label_2a7f4c:
    // 0x2a7f4c: 0xafc20004
    ctx->pc = 0x2a7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a7f50:
    // 0x2a7f50: 0x8fc20004
    ctx->pc = 0x2a7f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7f54: 0x8fc40000
    ctx->pc = 0x2a7f54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7f58: 0x441824
    ctx->pc = 0x2a7f58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a7f5c: 0x60102d
    ctx->pc = 0x2a7f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f60: 0x10000001
    ctx->pc = 0x2A7F60u;
    {
        const bool branch_taken_0x2a7f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7f60) {
            ctx->pc = 0x2A7F68u;
            goto label_2a7f68;
        }
    }
    ctx->pc = 0x2A7F68u;
label_2a7f68:
    // 0x2a7f68: 0x3c0e82d
    ctx->pc = 0x2a7f68u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f6c: 0xdfbf0070
    ctx->pc = 0x2a7f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7f70: 0xdfbe0060
    ctx->pc = 0x2a7f70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7f74: 0xdfb00050
    ctx->pc = 0x2a7f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7f78: 0x27bd0080
    ctx->pc = 0x2a7f78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7f7c: 0x3e00008
    ctx->pc = 0x2A7F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A7CD4u: goto label_2a7cd4;
            case 0x2A7CF0u: goto label_2a7cf0;
            case 0x2A7D0Cu: goto label_2a7d0c;
            case 0x2A7D28u: goto label_2a7d28;
            case 0x2A7D44u: goto label_2a7d44;
            case 0x2A7D60u: goto label_2a7d60;
            case 0x2A7D7Cu: goto label_2a7d7c;
            case 0x2A7D80u: goto label_2a7d80;
            case 0x2A7D98u: goto label_2a7d98;
            case 0x2A7DB4u: goto label_2a7db4;
            case 0x2A7DD0u: goto label_2a7dd0;
            case 0x2A7DECu: goto label_2a7dec;
            case 0x2A7E08u: goto label_2a7e08;
            case 0x2A7E20u: goto label_2a7e20;
            case 0x2A7E64u: goto label_2a7e64;
            case 0x2A7E80u: goto label_2a7e80;
            case 0x2A7E84u: goto label_2a7e84;
            case 0x2A7EB8u: goto label_2a7eb8;
            case 0x2A7F0Cu: goto label_2a7f0c;
            case 0x2A7F28u: goto label_2a7f28;
            case 0x2A7F4Cu: goto label_2a7f4c;
            case 0x2A7F50u: goto label_2a7f50;
            case 0x2A7F68u: goto label_2a7f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A7F84u;
}
