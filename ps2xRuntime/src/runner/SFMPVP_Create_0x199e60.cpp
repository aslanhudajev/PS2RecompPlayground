#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_Create
// Address: 0x199e60 - 0x19a094
void SFMPVP_Create_0x199e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_Create");


    ctx->pc = 0x199e60u;

    // 0x199e60: 0x27bdff50
    ctx->pc = 0x199e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x199e64: 0x3c020026
    ctx->pc = 0x199e64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x199e68: 0xffb50060
    ctx->pc = 0x199e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x199e6c: 0x80a82d
    ctx->pc = 0x199e6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e70: 0x8c43df50
    ctx->pc = 0x199e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958928)));
    // 0x199e74: 0x26a23740
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 14144));
    // 0x199e78: 0xffb70080
    ctx->pc = 0x199e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x199e7c: 0xafa20000
    ctx->pc = 0x199e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x199e80: 0x26ad3744
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 21), 14148));
    // 0x199e84: 0xffb60070
    ctx->pc = 0x199e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x199e88: 0x26a23dd8
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 15832));
    // 0x199e8c: 0xffbf00a0
    ctx->pc = 0x199e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x199e90: 0x26b63d10
    ctx->pc = 0x199e90u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 21), 15632));
    // 0x199e94: 0xffbe0090
    ctx->pc = 0x199e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x199e98: 0x26b73d30
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 21), 15664));
    // 0x199e9c: 0xffb40050
    ctx->pc = 0x199e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x199ea0: 0xffb30040
    ctx->pc = 0x199ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x199ea4: 0xffb20030
    ctx->pc = 0x199ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x199ea8: 0xffb10020
    ctx->pc = 0x199ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x199eac: 0xffb00010
    ctx->pc = 0x199eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x199eb0: 0x14600003
    ctx->pc = 0x199EB0u;
    {
        const bool branch_taken_0x199eb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x199EB4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x199eb0) {
            ctx->pc = 0x199EC0u;
            goto label_199ec0;
        }
    }
    ctx->pc = 0x199EB8u;
    // 0x199eb8: 0x1000006a
    ctx->pc = 0x199EB8u;
    {
        const bool branch_taken_0x199eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x199EBCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 15632), GPR_U32(ctx, 0));
        if (branch_taken_0x199eb8) {
            ctx->pc = 0x19A064u;
            goto label_19a064;
        }
    }
    ctx->pc = 0x199EC0u;
label_199ec0:
    // 0x199ec0: 0x8da4000c
    ctx->pc = 0x199ec0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x199ec4: 0x3c08ffff
    ctx->pc = 0x199ec4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)65535 << 16));
    // 0x199ec8: 0x8daa0008
    ctx->pc = 0x199ec8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x199ecc: 0x3508ffc0
    ctx->pc = 0x199eccu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65472));
    // 0x199ed0: 0x8da20010
    ctx->pc = 0x199ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x199ed4: 0x2407ffff
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199ed8: 0x1446018
    ctx->pc = 0x199ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)(uint32_t)result); }
    // 0x199edc: 0xe4482a
    ctx->pc = 0x199edcu;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 4)));
    // 0x199ee0: 0x2442003f
    ctx->pc = 0x199ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x199ee4: 0x2483000f
    ctx->pc = 0x199ee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 15));
    // 0x199ee8: 0x48a024
    ctx->pc = 0x199ee8u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x199eec: 0x3c0b0008
    ctx->pc = 0x199eecu;
    SET_GPR_U32(ctx, 11, ((uint32_t)8 << 16));
    // 0x199ef0: 0x280282d
    ctx->pc = 0x199ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ef4: 0x89180b
    ctx->pc = 0x199ef4u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x199ef8: 0xc30c0
    ctx->pc = 0x199ef8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 12), 3));
    // 0x199efc: 0x356b003f
    ctx->pc = 0x199efcu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 63));
    // 0x199f00: 0xcc3021
    ctx->pc = 0x199f00u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x199f04: 0x2544000f
    ctx->pc = 0x199f04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 15));
    // 0x199f08: 0x617c2
    ctx->pc = 0x199f08u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x199f0c: 0xea382a
    ctx->pc = 0x199f0cu;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 10)));
    // 0x199f10: 0xc23021
    ctx->pc = 0x199f10u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x199f14: 0x8da90020
    ctx->pc = 0x199f14u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x199f18: 0x63043
    ctx->pc = 0x199f18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x199f1c: 0x147200b
    ctx->pc = 0x199f1cu;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 10));
    // 0x199f20: 0x24c60800
    ctx->pc = 0x199f20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2048));
    // 0x199f24: 0x31903
    ctx->pc = 0x199f24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x199f28: 0xa61021
    ctx->pc = 0x199f28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x199f2c: 0x42103
    ctx->pc = 0x199f2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x199f30: 0x2442003f
    ctx->pc = 0x199f30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x199f34: 0x31a80
    ctx->pc = 0x199f34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 10));
    // 0x199f38: 0x48a024
    ctx->pc = 0x199f38u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x199f3c: 0x83f018
    ctx->pc = 0x199f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)(uint32_t)result); }
    // 0x199f40: 0x280982d
    ctx->pc = 0x199f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f44: 0x2529003f
    ctx->pc = 0x199f44u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 63));
    // 0x199f48: 0x26b5821
    ctx->pc = 0x199f48u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x199f4c: 0x2e0202d
    ctx->pc = 0x199f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f50: 0x168a024
    ctx->pc = 0x199f50u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x199f54: 0x26b13d78
    ctx->pc = 0x199f54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 15736));
    // 0x199f58: 0x280902d
    ctx->pc = 0x199f58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f5c: 0x2650104f
    ctx->pc = 0x199f5cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4175));
    // 0x199f60: 0x128a024
    ctx->pc = 0x199f60u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x199f64: 0xc058dca
    ctx->pc = 0x199F64u;
    SET_GPR_U32(ctx, 31, 0x199F6Cu);
    ctx->pc = 0x199F68u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    ctx->pc = 0x163728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegCreate_0x163728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F6Cu; }
        else if (ctx->pc != 0x199F6Cu) { ctx->pc = 0x199F6Cu; }
    }
    if (ctx->pc != 0x199F6Cu) { return; }
    ctx->pc = 0x199F6Cu;
    // 0x199f6c: 0x3c06001a
    ctx->pc = 0x199f6cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x199f70: 0x2e0202d
    ctx->pc = 0x199f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f74: 0x24c6a0a0
    ctx->pc = 0x199f74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294942880));
    // 0x199f78: 0x282d
    ctx->pc = 0x199f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f7c: 0xc058ee2
    ctx->pc = 0x199F7Cu;
    SET_GPR_U32(ctx, 31, 0x199F84u);
    ctx->pc = 0x199F80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x163b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F84u; }
        else if (ctx->pc != 0x199F84u) { ctx->pc = 0x199F84u; }
    }
    if (ctx->pc != 0x199F84u) { return; }
    ctx->pc = 0x199F84u;
    // 0x199f84: 0x3c06001a
    ctx->pc = 0x199f84u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x199f88: 0x2e0202d
    ctx->pc = 0x199f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f8c: 0x24c6a1a0
    ctx->pc = 0x199f8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943136));
    // 0x199f90: 0x24050001
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x199f94: 0xc058ee2
    ctx->pc = 0x199F94u;
    SET_GPR_U32(ctx, 31, 0x199F9Cu);
    ctx->pc = 0x199F98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x163b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199F9Cu; }
        else if (ctx->pc != 0x199F9Cu) { ctx->pc = 0x199F9Cu; }
    }
    if (ctx->pc != 0x199F9Cu) { return; }
    ctx->pc = 0x199F9Cu;
    // 0x199f9c: 0x3c06001a
    ctx->pc = 0x199f9cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x199fa0: 0x2e0202d
    ctx->pc = 0x199fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fa4: 0x24c6a218
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943256));
    // 0x199fa8: 0x24050002
    ctx->pc = 0x199fa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x199fac: 0xc058ee2
    ctx->pc = 0x199FACu;
    SET_GPR_U32(ctx, 31, 0x199FB4u);
    ctx->pc = 0x199FB0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x163b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FB4u; }
        else if (ctx->pc != 0x199FB4u) { ctx->pc = 0x199FB4u; }
    }
    if (ctx->pc != 0x199FB4u) { return; }
    ctx->pc = 0x199FB4u;
    // 0x199fb4: 0x3c06001a
    ctx->pc = 0x199fb4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x199fb8: 0x2e0202d
    ctx->pc = 0x199fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fbc: 0x24c6a238
    ctx->pc = 0x199fbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294943288));
    // 0x199fc0: 0x24050003
    ctx->pc = 0x199fc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x199fc4: 0xc058ee2
    ctx->pc = 0x199FC4u;
    SET_GPR_U32(ctx, 31, 0x199FCCu);
    ctx->pc = 0x199FC8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x163b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FCCu; }
        else if (ctx->pc != 0x199FCCu) { ctx->pc = 0x199FCCu; }
    }
    if (ctx->pc != 0x199FCCu) { return; }
    ctx->pc = 0x199FCCu;
    // 0x199fcc: 0x200402d
    ctx->pc = 0x199fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fd0: 0x24090200
    ctx->pc = 0x199fd0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 512));
    // 0x199fd4: 0x260282d
    ctx->pc = 0x199fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fd8: 0x240302d
    ctx->pc = 0x199fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fdc: 0x220202d
    ctx->pc = 0x199fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fe0: 0xc0664e8
    ctx->pc = 0x199FE0u;
    SET_GPR_U32(ctx, 31, 0x199FE8u);
    ctx->pc = 0x199FE4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1993A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufCreate_0x1993a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FE8u; }
        else if (ctx->pc != 0x199FE8u) { ctx->pc = 0x199FE8u; }
    }
    if (ctx->pc != 0x199FE8u) { return; }
    ctx->pc = 0x199FE8u;
    // 0x199fe8: 0xc0665c6
    ctx->pc = 0x199FE8u;
    SET_GPR_U32(ctx, 31, 0x199FF0u);
    ctx->pc = 0x199FECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199718u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufAddDMA_0x199718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FF0u; }
        else if (ctx->pc != 0x199FF0u) { ctx->pc = 0x199FF0u; }
    }
    if (ctx->pc != 0x199FF0u) { return; }
    ctx->pc = 0x199FF0u;
    // 0x199ff0: 0xc066642
    ctx->pc = 0x199FF0u;
    SET_GPR_U32(ctx, 31, 0x199FF8u);
    ctx->pc = 0x199FF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199908u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA_0x199908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199FF8u; }
        else if (ctx->pc != 0x199FF8u) { ctx->pc = 0x199FF8u; }
    }
    if (ctx->pc != 0x199FF8u) { return; }
    ctx->pc = 0x199FF8u;
    // 0x199ff8: 0x8fa30000
    ctx->pc = 0x199ff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199ffc: 0x8c6200cc
    ctx->pc = 0x199ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x19a000: 0x18400008
    ctx->pc = 0x19A000u;
    {
        const bool branch_taken_0x19a000 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19A004u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 14352));
        if (branch_taken_0x19a000) {
            ctx->pc = 0x19A024u;
            goto label_19a024;
        }
    }
    ctx->pc = 0x19A008u;
label_19a008:
    // 0x19a008: 0xac940004
    ctx->pc = 0x19a008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 20));
    // 0x19a00c: 0x2442ffff
    ctx->pc = 0x19a00cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19a010: 0x29ea021
    ctx->pc = 0x19a010u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x19a014: 0x24840050
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
    // 0x19a018: 0x0
    ctx->pc = 0x19a018u;
    // NOP
    // 0x19a01c: 0x1440fffa
    ctx->pc = 0x19A01Cu;
    {
        const bool branch_taken_0x19a01c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19a01c) {
            ctx->pc = 0x19A008u;
            goto label_19a008;
        }
    }
    ctx->pc = 0x19A024u;
label_19a024:
    // 0x19a024: 0xa2c00010
    ctx->pc = 0x19a024u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a028: 0x24030001
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a02c: 0xa2c00011
    ctx->pc = 0x19a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a030: 0x3c02ffff
    ctx->pc = 0x19a030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19a034: 0xa2c00012
    ctx->pc = 0x19a034u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a038: 0x3442ffff
    ctx->pc = 0x19a038u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x19a03c: 0xaec0001c
    ctx->pc = 0x19a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 0));
    // 0x19a040: 0xaec30000
    ctx->pc = 0x19a040u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x19a044: 0x8fa30004
    ctx->pc = 0x19a044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19a048: 0xaec00004
    ctx->pc = 0x19a048u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x19a04c: 0xac620000
    ctx->pc = 0x19a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19a050: 0xac600004
    ctx->pc = 0x19a050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x19a054: 0xaec00008
    ctx->pc = 0x19a054u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x19a058: 0xaec0000c
    ctx->pc = 0x19a058u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
    // 0x19a05c: 0xaec00014
    ctx->pc = 0x19a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 0));
    // 0x19a060: 0xaec00018
    ctx->pc = 0x19a060u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 0));
label_19a064:
    // 0x19a064: 0xdfbf00a0
    ctx->pc = 0x19a064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19a068: 0xdfbe0090
    ctx->pc = 0x19a068u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19a06c: 0xdfb70080
    ctx->pc = 0x19a06cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19a070: 0xdfb60070
    ctx->pc = 0x19a070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a074: 0xdfb50060
    ctx->pc = 0x19a074u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a078: 0xdfb40050
    ctx->pc = 0x19a078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a07c: 0xdfb30040
    ctx->pc = 0x19a07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a080: 0xdfb20030
    ctx->pc = 0x19a080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a084: 0xdfb10020
    ctx->pc = 0x19a084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a088: 0xdfb00010
    ctx->pc = 0x19a088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a08c: 0x3e00008
    ctx->pc = 0x19A08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A090u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199EC0u: goto label_199ec0;
            case 0x19A008u: goto label_19a008;
            case 0x19A024u: goto label_19a024;
            case 0x19A064u: goto label_19a064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A094u;
}
