#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_ReqRdDvd
// Address: 0x175e78 - 0x175f24
void SRD_ReqRdDvd_0x175e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_ReqRdDvd");


    ctx->pc = 0x175e78u;

    // 0x175e78: 0x27bdffa0
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x175e7c: 0xffb00000
    ctx->pc = 0x175e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175e80: 0xffb40040
    ctx->pc = 0x175e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x175e84: 0x3c100024
    ctx->pc = 0x175e84u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x175e88: 0xffb30030
    ctx->pc = 0x175e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x175e8c: 0x26028770
    ctx->pc = 0x175e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294936432));
    // 0x175e90: 0xffb20020
    ctx->pc = 0x175e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x175e94: 0x80a02d
    ctx->pc = 0x175e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e98: 0xffb10010
    ctx->pc = 0x175e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x175e9c: 0xa0982d
    ctx->pc = 0x175e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ea0: 0xffbf0050
    ctx->pc = 0x175ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x175ea4: 0xc0882d
    ctx->pc = 0x175ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ea8: 0x8c430004
    ctx->pc = 0x175ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x175eac: 0x10600006
    ctx->pc = 0x175EACu;
    {
        const bool branch_taken_0x175eac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x175EB0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175eac) {
            ctx->pc = 0x175EC8u;
            goto label_175ec8;
        }
    }
    ctx->pc = 0x175EB4u;
    // 0x175eb4: 0x24020003
    ctx->pc = 0x175eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x175eb8: 0x10620003
    ctx->pc = 0x175EB8u;
    {
        const bool branch_taken_0x175eb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x175EBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x175eb8) {
            ctx->pc = 0x175EC8u;
            goto label_175ec8;
        }
    }
    ctx->pc = 0x175EC0u;
    // 0x175ec0: 0x1462000f
    ctx->pc = 0x175EC0u;
    {
        const bool branch_taken_0x175ec0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x175EC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175ec0) {
            ctx->pc = 0x175F00u;
            goto label_175f00;
        }
    }
    ctx->pc = 0x175EC8u;
label_175ec8:
    // 0x175ec8: 0xc05d796
    ctx->pc = 0x175EC8u;
    SET_GPR_U32(ctx, 31, 0x175ED0u);
    ctx->pc = 0x175E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_reset_obj_0x175e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175ED0u; }
        else if (ctx->pc != 0x175ED0u) { ctx->pc = 0x175ED0u; }
    }
    if (ctx->pc != 0x175ED0u) { return; }
    ctx->pc = 0x175ED0u;
    // 0x175ed0: 0x24030001
    ctx->pc = 0x175ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175ed4: 0x26028770
    ctx->pc = 0x175ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294936432));
    // 0x175ed8: 0xae038770
    ctx->pc = 0x175ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936432), GPR_U32(ctx, 3));
    // 0x175edc: 0xac430004
    ctx->pc = 0x175edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x175ee0: 0xac540008
    ctx->pc = 0x175ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x175ee4: 0xac53000c
    ctx->pc = 0x175ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    // 0x175ee8: 0xac510010
    ctx->pc = 0x175ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x175eec: 0x8a430003
    ctx->pc = 0x175eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x175ef0: 0x9a430000
    ctx->pc = 0x175ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x175ef4: 0xa8430017
    ctx->pc = 0x175ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x175ef8: 0xb8430014
    ctx->pc = 0x175ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x175efc: 0x24040001
    ctx->pc = 0x175efcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_175f00:
    // 0x175f00: 0xdfbf0050
    ctx->pc = 0x175f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175f04: 0x80102d
    ctx->pc = 0x175f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f08: 0xdfb40040
    ctx->pc = 0x175f08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175f0c: 0xdfb30030
    ctx->pc = 0x175f0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175f10: 0xdfb20020
    ctx->pc = 0x175f10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175f14: 0xdfb10010
    ctx->pc = 0x175f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175f18: 0xdfb00000
    ctx->pc = 0x175f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175f1c: 0x3e00008
    ctx->pc = 0x175F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175EC8u: goto label_175ec8;
            case 0x175F00u: goto label_175f00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175F24u;
}
