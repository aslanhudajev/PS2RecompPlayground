#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _initRefImages
// Address: 0x2eef48 - 0x2ef030
void _initRefImages_0x2eef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2eef48u;

    // 0x2eef48: 0x3c02003a
    ctx->pc = 0x2eef48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2eef4c: 0x3c0c003a
    ctx->pc = 0x2eef4cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
    // 0x2eef50: 0x8c43314c
    ctx->pc = 0x2eef50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12620)));
    // 0x2eef54: 0x27bdffb0
    ctx->pc = 0x2eef54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2eef58: 0x8d823150
    ctx->pc = 0x2eef58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12624)));
    // 0x2eef5c: 0x3c0e0fff
    ctx->pc = 0x2eef5cu;
    SET_GPR_U32(ctx, 14, ((uint32_t)4095 << 16));
    // 0x2eef60: 0xffb00000
    ctx->pc = 0x2eef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eef64: 0x35ceffff
    ctx->pc = 0x2eef64u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 65535));
    // 0x2eef68: 0x621818
    ctx->pc = 0x2eef68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2eef6c: 0x2410ffff
    ctx->pc = 0x2eef6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eef70: 0xffb20020
    ctx->pc = 0x2eef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2eef74: 0x24120180
    ctx->pc = 0x2eef74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2eef78: 0x8fac0058
    ctx->pc = 0x2eef78u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eef7c: 0xffb10010
    ctx->pc = 0x2eef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2eef80: 0x203802a
    ctx->pc = 0x2eef80u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x2eef84: 0x246201ff
    ctx->pc = 0x2eef84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 511));
    // 0x2eef88: 0x70100b
    ctx->pc = 0x2eef88u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x2eef8c: 0x18e8824
    ctx->pc = 0x2eef8cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x2eef90: 0x21243
    ctx->pc = 0x2eef90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x2eef94: 0xffb30030
    ctx->pc = 0x2eef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2eef98: 0x521818
    ctx->pc = 0x2eef98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2eef9c: 0x8fad0060
    ctx->pc = 0x2eef9cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eefa0: 0x3c132000
    ctx->pc = 0x2eefa0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)8192 << 16));
    // 0x2eefa4: 0xffb40040
    ctx->pc = 0x2eefa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2eefa8: 0x8fb40068
    ctx->pc = 0x2eefa8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2eefac: 0x2338825
    ctx->pc = 0x2eefacu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2eefb0: 0x1ae7824
    ctx->pc = 0x2eefb0u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2eefb4: 0xac910000
    ctx->pc = 0x2eefb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x2eefb8: 0x6c6021
    ctx->pc = 0x2eefb8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2eefbc: 0x1f37825
    ctx->pc = 0x2eefbcu;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x2eefc0: 0x521818
    ctx->pc = 0x2eefc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2eefc4: 0x522018
    ctx->pc = 0x2eefc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2eefc8: 0xacaf0000
    ctx->pc = 0x2eefc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x2eefcc: 0x18e6024
    ctx->pc = 0x2eefccu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x2eefd0: 0x1936025
    ctx->pc = 0x2eefd0u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x2eefd4: 0xdfb20020
    ctx->pc = 0x2eefd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eefd8: 0xdfb00000
    ctx->pc = 0x2eefd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eefdc: 0x6d6821
    ctx->pc = 0x2eefdcu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2eefe0: 0x941021
    ctx->pc = 0x2eefe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2eefe4: 0x28e1824
    ctx->pc = 0x2eefe4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 14)));
    // 0x2eefe8: 0x1ae6824
    ctx->pc = 0x2eefe8u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2eefec: 0x731825
    ctx->pc = 0x2eefecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2eeff0: 0x4e1024
    ctx->pc = 0x2eeff0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2eeff4: 0xacc30000
    ctx->pc = 0x2eeff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2eeff8: 0x1b36825
    ctx->pc = 0x2eeff8u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x2eeffc: 0xacf10000
    ctx->pc = 0x2eeffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x2ef000: 0x531025
    ctx->pc = 0x2ef000u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ef004: 0xad0f0000
    ctx->pc = 0x2ef004u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x2ef008: 0xad230000
    ctx->pc = 0x2ef008u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2ef00c: 0xad4c0000
    ctx->pc = 0x2ef00cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x2ef010: 0x8fa30050
    ctx->pc = 0x2ef010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef014: 0xad6d0000
    ctx->pc = 0x2ef014u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x2ef018: 0xdfb40040
    ctx->pc = 0x2ef018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef01c: 0xdfb30030
    ctx->pc = 0x2ef01cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef020: 0xdfb10010
    ctx->pc = 0x2ef020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef024: 0xac620000
    ctx->pc = 0x2ef024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ef028: 0x3e00008
    ctx->pc = 0x2EF028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF02Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF030u;
}
