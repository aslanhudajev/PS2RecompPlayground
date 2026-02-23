#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_StartMemIdx
// Address: 0x172e08 - 0x172f34
void ADXT_StartMemIdx_0x172e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_StartMemIdx");


    ctx->pc = 0x172e08u;

    // 0x172e08: 0x27bdffb0
    ctx->pc = 0x172e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x172e0c: 0x8f828260
    ctx->pc = 0x172e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x172e10: 0xffb20020
    ctx->pc = 0x172e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x172e14: 0xffb10010
    ctx->pc = 0x172e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x172e18: 0x80902d
    ctx->pc = 0x172e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e1c: 0xffb00000
    ctx->pc = 0x172e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172e20: 0xa0882d
    ctx->pc = 0x172e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e24: 0xffb30030
    ctx->pc = 0x172e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x172e28: 0xffbf0040
    ctx->pc = 0x172e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x172e2c: 0xc05c73a
    ctx->pc = 0x172E2Cu;
    SET_GPR_U32(ctx, 31, 0x172E34u);
    ctx->pc = 0x172E30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E34u; }
        else if (ctx->pc != 0x172E34u) { ctx->pc = 0x172E34u; }
    }
    if (ctx->pc != 0x172E34u) { return; }
    ctx->pc = 0x172E34u;
    // 0x172e34: 0x3c1300ff
    ctx->pc = 0x172e34u;
    SET_GPR_U32(ctx, 19, ((uint32_t)255 << 16));
    // 0x172e38: 0x8e230004
    ctx->pc = 0x172e38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172e3c: 0x32a03
    ctx->pc = 0x172e3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x172e40: 0x32200
    ctx->pc = 0x172e40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x172e44: 0x31602
    ctx->pc = 0x172e44u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 24));
    // 0x172e48: 0x932024
    ctx->pc = 0x172e48u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x172e4c: 0x30a5ff00
    ctx->pc = 0x172e4cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x172e50: 0x31e00
    ctx->pc = 0x172e50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x172e54: 0x431025
    ctx->pc = 0x172e54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172e58: 0x852025
    ctx->pc = 0x172e58u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x172e5c: 0x441025
    ctx->pc = 0x172e5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172e60: 0x202102a
    ctx->pc = 0x172e60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x172e64: 0x1040002d
    ctx->pc = 0x172E64u;
    {
        const bool branch_taken_0x172e64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172E68u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x172e64) {
            ctx->pc = 0x172F1Cu;
            goto label_172f1c;
        }
    }
    ctx->pc = 0x172E6Cu;
    // 0x172e6c: 0x602002c
    ctx->pc = 0x172E6Cu;
    {
        const bool branch_taken_0x172e6c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x172e6c) {
            ctx->pc = 0x172E70u;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x172F20u;
            goto label_172f20;
        }
    }
    ctx->pc = 0x172E74u;
    // 0x172e74: 0xc05a4e4
    ctx->pc = 0x172E74u;
    SET_GPR_U32(ctx, 31, 0x172E7Cu);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E7Cu; }
        else if (ctx->pc != 0x172E7Cu) { ctx->pc = 0x172E7Cu; }
    }
    if (ctx->pc != 0x172E7Cu) { return; }
    ctx->pc = 0x172E7Cu;
    // 0x172e7c: 0x1010c0
    ctx->pc = 0x172e7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x172e80: 0x3c054000
    ctx->pc = 0x172e80u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
    // 0x172e84: 0x511021
    ctx->pc = 0x172e84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x172e88: 0x8c430008
    ctx->pc = 0x172e88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x172e8c: 0x33203
    ctx->pc = 0x172e8cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x172e90: 0x31200
    ctx->pc = 0x172e90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
    // 0x172e94: 0x32602
    ctx->pc = 0x172e94u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 24));
    // 0x172e98: 0x531024
    ctx->pc = 0x172e98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x172e9c: 0x30c6ff00
    ctx->pc = 0x172e9cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x172ea0: 0x31e00
    ctx->pc = 0x172ea0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x172ea4: 0x832025
    ctx->pc = 0x172ea4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x172ea8: 0x461025
    ctx->pc = 0x172ea8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x172eac: 0x822025
    ctx->pc = 0x172eacu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x172eb0: 0xc05efec
    ctx->pc = 0x172EB0u;
    SET_GPR_U32(ctx, 31, 0x172EB8u);
    ctx->pc = 0x172EB4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->pc = 0x17BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Create_0x17bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EB8u; }
        else if (ctx->pc != 0x172EB8u) { ctx->pc = 0x172EB8u; }
    }
    if (ctx->pc != 0x172EB8u) { return; }
    ctx->pc = 0x172EB8u;
    // 0x172eb8: 0x1440000c
    ctx->pc = 0x172EB8u;
    {
        const bool branch_taken_0x172eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172EBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172eb8) {
            ctx->pc = 0x172EECu;
            goto label_172eec;
        }
    }
    ctx->pc = 0x172EC0u;
    // 0x172ec0: 0xc05a4f0
    ctx->pc = 0x172EC0u;
    SET_GPR_U32(ctx, 31, 0x172EC8u);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EC8u; }
        else if (ctx->pc != 0x172EC8u) { ctx->pc = 0x172EC8u; }
    }
    if (ctx->pc != 0x172EC8u) { return; }
    ctx->pc = 0x172EC8u;
    // 0x172ec8: 0x3c04002c
    ctx->pc = 0x172ec8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x172ecc: 0xdfbf0040
    ctx->pc = 0x172eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172ed0: 0xdfb30030
    ctx->pc = 0x172ed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172ed4: 0x2484a340
    ctx->pc = 0x172ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943552));
    // 0x172ed8: 0xdfb20020
    ctx->pc = 0x172ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172edc: 0xdfb10010
    ctx->pc = 0x172edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172ee0: 0xdfb00000
    ctx->pc = 0x172ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172ee4: 0x805a854
    ctx->pc = 0x172EE4u;
    ctx->pc = 0x172EE8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x16A150u;
    ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime); return;
    ctx->pc = 0x172EECu;
label_172eec:
    // 0x172eec: 0xc05c660
    ctx->pc = 0x172EECu;
    SET_GPR_U32(ctx, 31, 0x172EF4u);
    ctx->pc = 0x172EF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171980u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_start_sj_0x171980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EF4u; }
        else if (ctx->pc != 0x172EF4u) { ctx->pc = 0x172EF4u; }
    }
    if (ctx->pc != 0x172EF4u) { return; }
    ctx->pc = 0x172EF4u;
    // 0x172ef4: 0x24020002
    ctx->pc = 0x172ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x172ef8: 0xa2400098
    ctx->pc = 0x172ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x172efc: 0xa2420002
    ctx->pc = 0x172efcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x172f00: 0xdfbf0040
    ctx->pc = 0x172f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172f04: 0xdfb30030
    ctx->pc = 0x172f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172f08: 0xdfb20020
    ctx->pc = 0x172f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172f0c: 0xdfb10010
    ctx->pc = 0x172f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172f10: 0xdfb00000
    ctx->pc = 0x172f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172f14: 0x805a4f0
    ctx->pc = 0x172F14u;
    ctx->pc = 0x172F18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x172F1Cu;
label_172f1c:
    // 0x172f1c: 0xdfb30030
    ctx->pc = 0x172f1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_172f20:
    // 0x172f20: 0xdfb20020
    ctx->pc = 0x172f20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172f24: 0xdfb10010
    ctx->pc = 0x172f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172f28: 0xdfb00000
    ctx->pc = 0x172f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172f2c: 0x3e00008
    ctx->pc = 0x172F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172F30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172EECu: goto label_172eec;
            case 0x172F1Cu: goto label_172f1c;
            case 0x172F20u: goto label_172f20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172F34u;
}
