#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdCreate
// Address: 0x18ec60 - 0x18f0ac
void mwPlySfdCreate_0x18ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdCreate");


    ctx->pc = 0x18ec60u;

    // 0x18ec60: 0x27bdff00
    ctx->pc = 0x18ec60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x18ec64: 0x3c02002f
    ctx->pc = 0x18ec64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18ec68: 0xffbe00e0
    ctx->pc = 0x18ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x18ec6c: 0x3c03002f
    ctx->pc = 0x18ec6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x18ec70: 0xa0f02d
    ctx->pc = 0x18ec70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec74: 0xafa70050
    ctx->pc = 0x18ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x18ec78: 0xc0282d
    ctx->pc = 0x18ec78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec7c: 0xffb500b0
    ctx->pc = 0x18ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x18ec80: 0xffb400a0
    ctx->pc = 0x18ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x18ec84: 0x2446c520
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x18ec88: 0xffb30090
    ctx->pc = 0x18ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x18ec8c: 0x2467c524
    ctx->pc = 0x18ec8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294952228));
    // 0x18ec90: 0xffb20080
    ctx->pc = 0x18ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x18ec94: 0x140a02d
    ctx->pc = 0x18ec94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec98: 0xafa80054
    ctx->pc = 0x18ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x18ec9c: 0x3c12002f
    ctx->pc = 0x18ec9cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)47 << 16));
    // 0x18eca0: 0xafa90058
    ctx->pc = 0x18eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 9));
    // 0x18eca4: 0x3c13002f
    ctx->pc = 0x18eca4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)47 << 16));
    // 0x18eca8: 0xafab005c
    ctx->pc = 0x18eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 11));
    // 0x18ecac: 0x3c02002f
    ctx->pc = 0x18ecacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18ecb0: 0x3c03002f
    ctx->pc = 0x18ecb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x18ecb4: 0x80a82d
    ctx->pc = 0x18ecb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecb8: 0xffb700d0
    ctx->pc = 0x18ecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x18ecbc: 0x264ac53c
    ctx->pc = 0x18ecbcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 18), 4294952252));
    // 0x18ecc0: 0xffb600c0
    ctx->pc = 0x18ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x18ecc4: 0x266bc538
    ctx->pc = 0x18ecc4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 19), 4294952248));
    // 0x18ecc8: 0xffb10070
    ctx->pc = 0x18ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x18eccc: 0x3c0202d
    ctx->pc = 0x18ecccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecd0: 0xffb00060
    ctx->pc = 0x18ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x18ecd4: 0x2448c528
    ctx->pc = 0x18ecd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294952232));
    // 0x18ecd8: 0xffbf00f0
    ctx->pc = 0x18ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x18ecdc: 0xc0639dc
    ctx->pc = 0x18ECDCu;
    SET_GPR_U32(ctx, 31, 0x18ECE4u);
    ctx->pc = 0x18ECE0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 4294952236));
    ctx->pc = 0x18E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCalcWorkStmBuf_0x18e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECE4u; }
        else if (ctx->pc != 0x18ECE4u) { ctx->pc = 0x18ECE4u; }
    }
    if (ctx->pc != 0x18ECE4u) { return; }
    ctx->pc = 0x18ECE4u;
    // 0x18ece4: 0x3c10002f
    ctx->pc = 0x18ece4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)47 << 16));
    // 0x18ece8: 0x3c11002f
    ctx->pc = 0x18ece8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)47 << 16));
    // 0x18ecec: 0x8fa40050
    ctx->pc = 0x18ececu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ecf0: 0x8fa50054
    ctx->pc = 0x18ecf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x18ecf4: 0x2607c530
    ctx->pc = 0x18ecf4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294952240));
    // 0x18ecf8: 0x8fa60058
    ctx->pc = 0x18ecf8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18ecfc: 0xc063a20
    ctx->pc = 0x18ECFCu;
    SET_GPR_U32(ctx, 31, 0x18ED04u);
    ctx->pc = 0x18ED00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4294952244));
    ctx->pc = 0x18E880u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCalcWorkFrmBuf_0x18e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED04u; }
        else if (ctx->pc != 0x18ED04u) { ctx->pc = 0x18ED04u; }
    }
    if (ctx->pc != 0x18ED04u) { return; }
    ctx->pc = 0x18ED04u;
    // 0x18ed04: 0x3c05002f
    ctx->pc = 0x18ed04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)47 << 16));
    // 0x18ed08: 0x3c06002f
    ctx->pc = 0x18ed08u;
    SET_GPR_U32(ctx, 6, ((uint32_t)47 << 16));
    // 0x18ed0c: 0x8ca4c524
    ctx->pc = 0x18ed0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294952228)));
    // 0x18ed10: 0x2682001f
    ctx->pc = 0x18ed10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 31));
    // 0x18ed14: 0x8cc5c528
    ctx->pc = 0x18ed14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294952232)));
    // 0x18ed18: 0x3c07002f
    ctx->pc = 0x18ed18u;
    SET_GPR_U32(ctx, 7, ((uint32_t)47 << 16));
    // 0x18ed1c: 0x8ce3c52c
    ctx->pc = 0x18ed1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294952236)));
    // 0x18ed20: 0x21142
    ctx->pc = 0x18ed20u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 5));
    // 0x18ed24: 0x2b140
    ctx->pc = 0x18ed24u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 2), 5));
    // 0x18ed28: 0x852021
    ctx->pc = 0x18ed28u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18ed2c: 0x2d44023
    ctx->pc = 0x18ed2cu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x18ed30: 0x832021
    ctx->pc = 0x18ed30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18ed34: 0x3c02002f
    ctx->pc = 0x18ed34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18ed38: 0x2c4a021
    ctx->pc = 0x18ed38u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x18ed3c: 0x8c43c520
    ctx->pc = 0x18ed3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294952224)));
    // 0x18ed40: 0x2405ffc0
    ctx->pc = 0x18ed40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x18ed44: 0x2682003f
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 63));
    // 0x18ed48: 0x8e06c530
    ctx->pc = 0x18ed48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294952240)));
    // 0x18ed4c: 0x458024
    ctx->pc = 0x18ed4cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ed50: 0x8e27c534
    ctx->pc = 0x18ed50u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4294952244)));
    // 0x18ed54: 0x8e42c53c
    ctx->pc = 0x18ed54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294952252)));
    // 0x18ed58: 0x203b821
    ctx->pc = 0x18ed58u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18ed5c: 0x8e63c538
    ctx->pc = 0x18ed5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294952248)));
    // 0x18ed60: 0x2e69021
    ctx->pc = 0x18ed60u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x18ed64: 0x2479821
    ctx->pc = 0x18ed64u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x18ed68: 0x3c06002f
    ctx->pc = 0x18ed68u;
    SET_GPR_U32(ctx, 6, ((uint32_t)47 << 16));
    // 0x18ed6c: 0x2628821
    ctx->pc = 0x18ed6cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18ed70: 0x3c07002f
    ctx->pc = 0x18ed70u;
    SET_GPR_U32(ctx, 7, ((uint32_t)47 << 16));
    // 0x18ed74: 0x223a021
    ctx->pc = 0x18ed74u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18ed78: 0x3c050024
    ctx->pc = 0x18ed78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18ed7c: 0x2961023
    ctx->pc = 0x18ed7cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x18ed80: 0x8fa3005c
    ctx->pc = 0x18ed80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x18ed84: 0x485021
    ctx->pc = 0x18ed84u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18ed88: 0xacc4c544
    ctx->pc = 0x18ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952260), GPR_U32(ctx, 4));
    // 0x18ed8c: 0xace8c540
    ctx->pc = 0x18ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952256), GPR_U32(ctx, 8));
    // 0x18ed90: 0x6a102a
    ctx->pc = 0x18ed90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 10)));
    // 0x18ed94: 0x10400007
    ctx->pc = 0x18ED94u;
    {
        const bool branch_taken_0x18ed94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18ED98u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 15424), GPR_U32(ctx, 10));
        if (branch_taken_0x18ed94) {
            ctx->pc = 0x18EDB4u;
            goto label_18edb4;
        }
    }
    ctx->pc = 0x18ED9Cu;
    // 0x18ed9c: 0x3c04002c
    ctx->pc = 0x18ed9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18eda0: 0x1432823
    ctx->pc = 0x18eda0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18eda4: 0xc063dda
    ctx->pc = 0x18EDA4u;
    SET_GPR_U32(ctx, 31, 0x18EDACu);
    ctx->pc = 0x18EDA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955264));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EDACu; }
        else if (ctx->pc != 0x18EDACu) { ctx->pc = 0x18EDACu; }
    }
    if (ctx->pc != 0x18EDACu) { return; }
    ctx->pc = 0x18EDACu;
    // 0x18edac: 0x100000b3
    ctx->pc = 0x18EDACu;
    {
        const bool branch_taken_0x18edac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EDB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18edac) {
            ctx->pc = 0x18F07Cu;
            goto label_18f07c;
        }
    }
    ctx->pc = 0x18EDB4u;
label_18edb4:
    // 0x18edb4: 0x8fa40050
    ctx->pc = 0x18edb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18edb8: 0x27a60040
    ctx->pc = 0x18edb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18edbc: 0x8fa50054
    ctx->pc = 0x18edbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x18edc0: 0x27a70044
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 68));
    // 0x18edc4: 0x27a80048
    ctx->pc = 0x18edc4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 72));
    // 0x18edc8: 0xc063a0e
    ctx->pc = 0x18EDC8u;
    SET_GPR_U32(ctx, 31, 0x18EDD0u);
    ctx->pc = 0x18EDCCu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 76));
    ctx->pc = 0x18E838u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCalcFrmRes_0x18e838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EDD0u; }
        else if (ctx->pc != 0x18EDD0u) { ctx->pc = 0x18EDD0u; }
    }
    if (ctx->pc != 0x18EDD0u) { return; }
    ctx->pc = 0x18EDD0u;
    // 0x18edd0: 0x3c140024
    ctx->pc = 0x18edd0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)36 << 16));
    // 0x18edd4: 0x3c0a0024
    ctx->pc = 0x18edd4u;
    SET_GPR_U32(ctx, 10, ((uint32_t)36 << 16));
    // 0x18edd8: 0x8fa40048
    ctx->pc = 0x18edd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18eddc: 0x8fa70040
    ctx->pc = 0x18eddcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ede0: 0x25423bf8
    ctx->pc = 0x18ede0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 15352));
    // 0x18ede4: 0x8fa80044
    ctx->pc = 0x18ede4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18ede8: 0x26853c20
    ctx->pc = 0x18ede8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 15392));
    // 0x18edec: 0x8fa3004c
    ctx->pc = 0x18edecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x18edf0: 0x3c060026
    ctx->pc = 0x18edf0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)38 << 16));
    // 0x18edf4: 0xac520020
    ctx->pc = 0x18edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
    // 0x18edf8: 0x24090001
    ctx->pc = 0x18edf8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18edfc: 0xacb10018
    ctx->pc = 0x18edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 17));
    // 0x18ee00: 0xad443bf8
    ctx->pc = 0x18ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 15352), GPR_U32(ctx, 4));
    // 0x18ee04: 0xac570010
    ctx->pc = 0x18ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
    // 0x18ee08: 0xac430004
    ctx->pc = 0x18ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18ee0c: 0xac470014
    ctx->pc = 0x18ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x18ee10: 0xac480018
    ctx->pc = 0x18ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x18ee14: 0xacb30008
    ctx->pc = 0x18ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 19));
    // 0x18ee18: 0xac470008
    ctx->pc = 0x18ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x18ee1c: 0xac48000c
    ctx->pc = 0x18ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x18ee20: 0xacd0dce8
    ctx->pc = 0x18ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294958312), GPR_U32(ctx, 16));
    // 0x18ee24: 0x8fa40058
    ctx->pc = 0x18ee24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18ee28: 0x13c90006
    ctx->pc = 0x18EE28u;
    {
        const bool branch_taken_0x18ee28 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 9));
        ctx->pc = 0x18EE2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        if (branch_taken_0x18ee28) {
            ctx->pc = 0x18EE44u;
            goto label_18ee44;
        }
    }
    ctx->pc = 0x18EE30u;
    // 0x18ee30: 0x24020002
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ee34: 0x13c20029
    ctx->pc = 0x18EE34u;
    {
        const bool branch_taken_0x18ee34 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 2));
        ctx->pc = 0x18EE38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x18ee34) {
            ctx->pc = 0x18EEDCu;
            goto label_18eedc;
        }
    }
    ctx->pc = 0x18EE3Cu;
    // 0x18ee3c: 0x10000051
    ctx->pc = 0x18EE3Cu;
    {
        const bool branch_taken_0x18ee3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EE40u;
        SET_GPR_U32(ctx, 4, ((uint32_t)47 << 16));
        if (branch_taken_0x18ee3c) {
            ctx->pc = 0x18EF84u;
            goto label_18ef84;
        }
    }
    ctx->pc = 0x18EE44u;
label_18ee44:
    // 0x18ee44: 0x3c05002f
    ctx->pc = 0x18ee44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)47 << 16));
    // 0x18ee48: 0x3c020024
    ctx->pc = 0x18ee48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18ee4c: 0x8ca3c520
    ctx->pc = 0x18ee4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294952224)));
    // 0x18ee50: 0x24443b78
    ctx->pc = 0x18ee50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15224));
    // 0x18ee54: 0x68860007
    ctx->pc = 0x18ee54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ee58: 0x6c860000
    ctx->pc = 0x18ee58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ee5c: 0x6887000f
    ctx->pc = 0x18ee5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ee60: 0x6c870008
    ctx->pc = 0x18ee60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ee64: 0x68880017
    ctx->pc = 0x18ee64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ee68: 0x6c880010
    ctx->pc = 0x18ee68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ee6c: 0xb3a60007
    ctx->pc = 0x18ee6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ee70: 0xb7a60000
    ctx->pc = 0x18ee70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ee74: 0xb3a7000f
    ctx->pc = 0x18ee74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ee78: 0xb7a70008
    ctx->pc = 0x18ee78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ee7c: 0xb3a80017
    ctx->pc = 0x18ee7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ee80: 0xb7a80010
    ctx->pc = 0x18ee80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ee84: 0x6886001f
    ctx->pc = 0x18ee84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ee88: 0x6c860018
    ctx->pc = 0x18ee88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ee8c: 0x68870027
    ctx->pc = 0x18ee8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ee90: 0x6c870020
    ctx->pc = 0x18ee90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ee94: 0x6888002f
    ctx->pc = 0x18ee94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ee98: 0x6c880028
    ctx->pc = 0x18ee98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ee9c: 0xb3a6001f
    ctx->pc = 0x18ee9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eea0: 0xb7a60018
    ctx->pc = 0x18eea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eea4: 0xb3a70027
    ctx->pc = 0x18eea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eea8: 0xb7a70020
    ctx->pc = 0x18eea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eeac: 0xb3a8002f
    ctx->pc = 0x18eeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eeb0: 0xb7a80028
    ctx->pc = 0x18eeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eeb4: 0x68860037
    ctx->pc = 0x18eeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18eeb8: 0x6c860030
    ctx->pc = 0x18eeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18eebc: 0x8c870038
    ctx->pc = 0x18eebcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18eec0: 0xb3a60037
    ctx->pc = 0x18eec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eec4: 0xb7a60030
    ctx->pc = 0x18eec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eec8: 0xafa70038
    ctx->pc = 0x18eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x18eecc: 0xaeb0004c
    ctx->pc = 0x18eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 16));
    // 0x18eed0: 0xaea30050
    ctx->pc = 0x18eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
    // 0x18eed4: 0x10000029
    ctx->pc = 0x18EED4u;
    {
        const bool branch_taken_0x18eed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EED8u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x18eed4) {
            ctx->pc = 0x18EF7Cu;
            goto label_18ef7c;
        }
    }
    ctx->pc = 0x18EEDCu;
label_18eedc:
    // 0x18eedc: 0x3c05002f
    ctx->pc = 0x18eedcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)47 << 16));
    // 0x18eee0: 0x3c03fffb
    ctx->pc = 0x18eee0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65531 << 16));
    // 0x18eee4: 0x8ca2c520
    ctx->pc = 0x18eee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294952224)));
    // 0x18eee8: 0x3c040024
    ctx->pc = 0x18eee8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18eeec: 0x3c050005
    ctx->pc = 0x18eeecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)5 << 16));
    // 0x18eef0: 0x431021
    ctx->pc = 0x18eef0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18eef4: 0x24833bb8
    ctx->pc = 0x18eef4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 15288));
    // 0x18eef8: 0x68660007
    ctx->pc = 0x18eef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18eefc: 0x6c660000
    ctx->pc = 0x18eefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ef00: 0x6867000f
    ctx->pc = 0x18ef00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ef04: 0x6c670008
    ctx->pc = 0x18ef04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ef08: 0x68680017
    ctx->pc = 0x18ef08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ef0c: 0x6c680010
    ctx->pc = 0x18ef0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ef10: 0xb3a60007
    ctx->pc = 0x18ef10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef14: 0xb7a60000
    ctx->pc = 0x18ef14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef18: 0xb3a7000f
    ctx->pc = 0x18ef18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef1c: 0xb7a70008
    ctx->pc = 0x18ef1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef20: 0xb3a80017
    ctx->pc = 0x18ef20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef24: 0xb7a80010
    ctx->pc = 0x18ef24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef28: 0x6866001f
    ctx->pc = 0x18ef28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ef2c: 0x6c660018
    ctx->pc = 0x18ef2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ef30: 0x68670027
    ctx->pc = 0x18ef30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ef34: 0x6c670020
    ctx->pc = 0x18ef34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ef38: 0x6868002f
    ctx->pc = 0x18ef38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ef3c: 0x6c680028
    ctx->pc = 0x18ef3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ef40: 0xb3a6001f
    ctx->pc = 0x18ef40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef44: 0xb7a60018
    ctx->pc = 0x18ef44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef48: 0xb3a70027
    ctx->pc = 0x18ef48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef4c: 0xb7a70020
    ctx->pc = 0x18ef4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef50: 0xb3a8002f
    ctx->pc = 0x18ef50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef54: 0xb7a80028
    ctx->pc = 0x18ef54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef58: 0x68660037
    ctx->pc = 0x18ef58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18ef5c: 0x6c660030
    ctx->pc = 0x18ef5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18ef60: 0x8c670038
    ctx->pc = 0x18ef60u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x18ef64: 0xb3a60037
    ctx->pc = 0x18ef64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef68: 0xb7a60030
    ctx->pc = 0x18ef68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ef6c: 0xafa70038
    ctx->pc = 0x18ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x18ef70: 0xaeb0004c
    ctx->pc = 0x18ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 16));
    // 0x18ef74: 0xaea20050
    ctx->pc = 0x18ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
    // 0x18ef78: 0xaea50054
    ctx->pc = 0x18ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 5));
label_18ef7c:
    // 0x18ef7c: 0x3c020024
    ctx->pc = 0x18ef7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18ef80: 0x3c04002f
    ctx->pc = 0x18ef80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)47 << 16));
label_18ef84:
    // 0x18ef84: 0x8c433c3c
    ctx->pc = 0x18ef84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15420)));
    // 0x18ef88: 0x8c85c524
    ctx->pc = 0x18ef88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4294952228)));
    // 0x18ef8c: 0x10a00008
    ctx->pc = 0x18EF8Cu;
    {
        const bool branch_taken_0x18ef8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EF90u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        if (branch_taken_0x18ef8c) {
            ctx->pc = 0x18EFB0u;
            goto label_18efb0;
        }
    }
    ctx->pc = 0x18EF94u;
    // 0x18ef94: 0xa3001a
    ctx->pc = 0x18ef94u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x18ef98: 0x50600001
    ctx->pc = 0x18EF98u;
    {
        const bool branch_taken_0x18ef98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18ef98) {
            ctx->pc = 0x18EF9Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x18EFA0u;
            goto label_18efa0;
        }
    }
    ctx->pc = 0x18EFA0u;
label_18efa0:
    // 0x18efa0: 0x1010
    ctx->pc = 0x18efa0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x18efa4: 0xa21023
    ctx->pc = 0x18efa4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18efa8: 0xac82c524
    ctx->pc = 0x18efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952228), GPR_U32(ctx, 2));
    // 0x18efac: 0x40282d
    ctx->pc = 0x18efacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18efb0:
    // 0x18efb0: 0x3c02002f
    ctx->pc = 0x18efb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18efb4: 0x3c06002f
    ctx->pc = 0x18efb4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)47 << 16));
    // 0x18efb8: 0x8c43c528
    ctx->pc = 0x18efb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294952232)));
    // 0x18efbc: 0x25443bf8
    ctx->pc = 0x18efbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 15352));
    // 0x18efc0: 0x8cc2c52c
    ctx->pc = 0x18efc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294952236)));
    // 0x18efc4: 0x8fa70058
    ctx->pc = 0x18efc4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18efc8: 0xafa20010
    ctx->pc = 0x18efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x18efcc: 0x8fa80050
    ctx->pc = 0x18efccu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18efd0: 0x8fa20054
    ctx->pc = 0x18efd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x18efd4: 0xafb60004
    ctx->pc = 0x18efd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
    // 0x18efd8: 0xafa50008
    ctx->pc = 0x18efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x18efdc: 0xafa3000c
    ctx->pc = 0x18efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x18efe0: 0xafa7002c
    ctx->pc = 0x18efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x18efe4: 0xafa80030
    ctx->pc = 0x18efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x18efe8: 0xc0655a4
    ctx->pc = 0x18EFE8u;
    SET_GPR_U32(ctx, 31, 0x18EFF0u);
    ctx->pc = 0x18EFECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x195690u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetMpvPara_0x195690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFF0u; }
        else if (ctx->pc != 0x18EFF0u) { ctx->pc = 0x18EFF0u; }
    }
    if (ctx->pc != 0x18EFF0u) { return; }
    ctx->pc = 0x18EFF0u;
    // 0x18eff0: 0x24020001
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eff4: 0x17c20003
    ctx->pc = 0x18EFF4u;
    {
        const bool branch_taken_0x18eff4 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 2));
        if (branch_taken_0x18eff4) {
            ctx->pc = 0x18F004u;
            goto label_18f004;
        }
    }
    ctx->pc = 0x18EFFCu;
    // 0x18effc: 0xc063ee0
    ctx->pc = 0x18EFFCu;
    SET_GPR_U32(ctx, 31, 0x18F004u);
    ctx->pc = 0x18F000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 15392));
    ctx->pc = 0x18FB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetAdxtPara_0x18fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F004u; }
        else if (ctx->pc != 0x18F004u) { ctx->pc = 0x18F004u; }
    }
    if (ctx->pc != 0x18F004u) { return; }
    ctx->pc = 0x18F004u;
label_18f004:
    // 0x18f004: 0xc066770
    ctx->pc = 0x18F004u;
    SET_GPR_U32(ctx, 31, 0x18F00Cu);
    ctx->pc = 0x18F008u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x199DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetSceMpeg_0x199dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F00Cu; }
        else if (ctx->pc != 0x18F00Cu) { ctx->pc = 0x18F00Cu; }
    }
    if (ctx->pc != 0x18F00Cu) { return; }
    ctx->pc = 0x18F00Cu;
    // 0x18f00c: 0x3a0202d
    ctx->pc = 0x18f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f010: 0xc066daa
    ctx->pc = 0x18F010u;
    SET_GPR_U32(ctx, 31, 0x18F018u);
    ctx->pc = 0x18F014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Create_0x19b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F018u; }
        else if (ctx->pc != 0x18F018u) { ctx->pc = 0x18F018u; }
    }
    if (ctx->pc != 0x18F018u) { return; }
    ctx->pc = 0x18F018u;
    // 0x18f018: 0x40802d
    ctx->pc = 0x18f018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f01c: 0x16000006
    ctx->pc = 0x18F01Cu;
    {
        const bool branch_taken_0x18f01c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F020u;
        SET_GPR_U32(ctx, 5, ((uint32_t)25 << 16));
        if (branch_taken_0x18f01c) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18F024u;
    // 0x18f024: 0xc0633b4
    ctx->pc = 0x18F024u;
    SET_GPR_U32(ctx, 31, 0x18F02Cu);
    ctx->pc = 0x18F028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966991));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F02Cu; }
        else if (ctx->pc != 0x18F02Cu) { ctx->pc = 0x18F02Cu; }
    }
    if (ctx->pc != 0x18F02Cu) { return; }
    ctx->pc = 0x18F02Cu;
    // 0x18f02c: 0x3c04002c
    ctx->pc = 0x18f02cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f030: 0x1000000b
    ctx->pc = 0x18F030u;
    {
        const bool branch_taken_0x18f030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F034u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955304));
        if (branch_taken_0x18f030) {
            ctx->pc = 0x18F060u;
            goto label_18f060;
        }
    }
    ctx->pc = 0x18F038u;
label_18f038:
    // 0x18f038: 0x200202d
    ctx->pc = 0x18f038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f03c: 0x24a5f388
    ctx->pc = 0x18f03cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964104));
    // 0x18f040: 0xc064eca
    ctx->pc = 0x18F040u;
    SET_GPR_U32(ctx, 31, 0x18F048u);
    ctx->pc = 0x18F044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetErrFn_0x193b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F048u; }
        else if (ctx->pc != 0x18F048u) { ctx->pc = 0x18F048u; }
    }
    if (ctx->pc != 0x18F048u) { return; }
    ctx->pc = 0x18F048u;
    // 0x18f048: 0x10400009
    ctx->pc = 0x18F048u;
    {
        const bool branch_taken_0x18f048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18f048) {
            ctx->pc = 0x18F070u;
            goto label_18f070;
        }
    }
    ctx->pc = 0x18F050u;
    // 0x18f050: 0xc0633b4
    ctx->pc = 0x18F050u;
    SET_GPR_U32(ctx, 31, 0x18F058u);
    ctx->pc = 0x18F054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F058u; }
        else if (ctx->pc != 0x18F058u) { ctx->pc = 0x18F058u; }
    }
    if (ctx->pc != 0x18F058u) { return; }
    ctx->pc = 0x18F058u;
    // 0x18f058: 0x3c04002c
    ctx->pc = 0x18f058u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f05c: 0x2484d158
    ctx->pc = 0x18f05cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955352));
label_18f060:
    // 0x18f060: 0xc063dda
    ctx->pc = 0x18F060u;
    SET_GPR_U32(ctx, 31, 0x18F068u);
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F068u; }
        else if (ctx->pc != 0x18F068u) { ctx->pc = 0x18F068u; }
    }
    if (ctx->pc != 0x18F068u) { return; }
    ctx->pc = 0x18F068u;
    // 0x18f068: 0x10000004
    ctx->pc = 0x18F068u;
    {
        const bool branch_taken_0x18f068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F06Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f068) {
            ctx->pc = 0x18F07Cu;
            goto label_18f07c;
        }
    }
    ctx->pc = 0x18F070u;
label_18f070:
    // 0x18f070: 0xc063ae4
    ctx->pc = 0x18F070u;
    SET_GPR_U32(ctx, 31, 0x18F078u);
    ctx->pc = 0x18F074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18EB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySetSupplySj_0x18eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F078u; }
        else if (ctx->pc != 0x18F078u) { ctx->pc = 0x18F078u; }
    }
    if (ctx->pc != 0x18F078u) { return; }
    ctx->pc = 0x18F078u;
    // 0x18f078: 0x200102d
    ctx->pc = 0x18f078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f07c:
    // 0x18f07c: 0xdfbf00f0
    ctx->pc = 0x18f07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18f080: 0xdfbe00e0
    ctx->pc = 0x18f080u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18f084: 0xdfb700d0
    ctx->pc = 0x18f084u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18f088: 0xdfb600c0
    ctx->pc = 0x18f088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18f08c: 0xdfb500b0
    ctx->pc = 0x18f08cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18f090: 0xdfb400a0
    ctx->pc = 0x18f090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18f094: 0xdfb30090
    ctx->pc = 0x18f094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18f098: 0xdfb20080
    ctx->pc = 0x18f098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18f09c: 0xdfb10070
    ctx->pc = 0x18f09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f0a0: 0xdfb00060
    ctx->pc = 0x18f0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f0a4: 0x3e00008
    ctx->pc = 0x18F0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F0A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EDB4u: goto label_18edb4;
            case 0x18EE44u: goto label_18ee44;
            case 0x18EEDCu: goto label_18eedc;
            case 0x18EF7Cu: goto label_18ef7c;
            case 0x18EF84u: goto label_18ef84;
            case 0x18EFA0u: goto label_18efa0;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18F004u: goto label_18f004;
            case 0x18F038u: goto label_18f038;
            case 0x18F060u: goto label_18f060;
            case 0x18F070u: goto label_18f070;
            case 0x18F07Cu: goto label_18f07c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F0ACu;
}
