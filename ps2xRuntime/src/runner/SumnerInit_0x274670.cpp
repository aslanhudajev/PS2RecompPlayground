#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerInit
// Address: 0x274670 - 0x274770
void SumnerInit_0x274670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274670u;

    // 0x274670: 0x27bdffd0
    ctx->pc = 0x274670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274674: 0xffbf0020
    ctx->pc = 0x274674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x274678: 0xffb10010
    ctx->pc = 0x274678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27467c: 0xffb00000
    ctx->pc = 0x27467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274680: 0x3c020034
    ctx->pc = 0x274680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274684: 0x8c44cda0
    ctx->pc = 0x274684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x274688: 0x3c05003b
    ctx->pc = 0x274688u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x27468c: 0x24a5a7f0
    ctx->pc = 0x27468cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944752));
    // 0x274690: 0xc0847fc
    ctx->pc = 0x274690u;
    SET_GPR_U32(ctx, 31, 0x274698u);
    ctx->pc = 0x274694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274698u; }
    }
    if (ctx->pc != 0x274698u) { return; }
    ctx->pc = 0x274698u;
    // 0x274698: 0x40202d
    ctx->pc = 0x274698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27469c: 0x3c100034
    ctx->pc = 0x27469cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2746a0: 0x2605fc40
    ctx->pc = 0x2746a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294966336));
    // 0x2746a4: 0x302d
    ctx->pc = 0x2746a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746a8: 0xc08476a
    ctx->pc = 0x2746A8u;
    SET_GPR_U32(ctx, 31, 0x2746B0u);
    ctx->pc = 0x2746ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746B0u; }
    }
    if (ctx->pc != 0x2746B0u) { return; }
    ctx->pc = 0x2746B0u;
    // 0x2746b0: 0xae02fc40
    ctx->pc = 0x2746b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966336), GPR_U32(ctx, 2));
    // 0x2746b4: 0x3c020038
    ctx->pc = 0x2746b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2746b8: 0x8c44c9a0
    ctx->pc = 0x2746b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
    // 0x2746bc: 0x3c05003a
    ctx->pc = 0x2746bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2746c0: 0x24a52550
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x2746c4: 0xc0b3ec0
    ctx->pc = 0x2746C4u;
    SET_GPR_U32(ctx, 31, 0x2746CCu);
    ctx->pc = 0x2746C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746CCu; }
    }
    if (ctx->pc != 0x2746CCu) { return; }
    ctx->pc = 0x2746CCu;
    // 0x2746cc: 0x3c110034
    ctx->pc = 0x2746ccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x2746d0: 0xae22fba8
    ctx->pc = 0x2746d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966184), GPR_U32(ctx, 2));
    // 0x2746d4: 0x8e03fc40
    ctx->pc = 0x2746d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294966336)));
    // 0x2746d8: 0x8c640000
    ctx->pc = 0x2746d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2746dc: 0xc0b3f94
    ctx->pc = 0x2746DCu;
    SET_GPR_U32(ctx, 31, 0x2746E4u);
    ctx->pc = 0x2746E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746E4u; }
    }
    if (ctx->pc != 0x2746E4u) { return; }
    ctx->pc = 0x2746E4u;
    // 0x2746e4: 0xc093fd2
    ctx->pc = 0x2746E4u;
    SET_GPR_U32(ctx, 31, 0x2746ECu);
    ctx->pc = 0x2746E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindLookoutParam_0x24ff48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746ECu; }
    }
    if (ctx->pc != 0x2746ECu) { return; }
    ctx->pc = 0x2746ECu;
    // 0x2746ec: 0x10400003
    ctx->pc = 0x2746ECu;
    {
        const bool branch_taken_0x2746ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2746F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2746ec) {
            ctx->pc = 0x2746FCu;
            goto label_2746fc;
        }
    }
    ctx->pc = 0x2746F4u;
    // 0x2746f4: 0xc0b5494
    ctx->pc = 0x2746F4u;
    SET_GPR_U32(ctx, 31, 0x2746FCu);
    ctx->pc = 0x2746F8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294966184)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746FCu; }
    }
    if (ctx->pc != 0x2746FCu) { return; }
    ctx->pc = 0x2746FCu;
label_2746fc:
    // 0x2746fc: 0x3c020034
    ctx->pc = 0x2746fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274700: 0xac40fc88
    ctx->pc = 0x274700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966408), GPR_U32(ctx, 0));
    // 0x274704: 0x3c020034
    ctx->pc = 0x274704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274708: 0xac40fbac
    ctx->pc = 0x274708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966188), GPR_U32(ctx, 0));
    // 0x27470c: 0x3c020034
    ctx->pc = 0x27470cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274710: 0xac40fbbc
    ctx->pc = 0x274710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966204), GPR_U32(ctx, 0));
    // 0x274714: 0x3c020034
    ctx->pc = 0x274714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274718: 0xac40fbcc
    ctx->pc = 0x274718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966220), GPR_U32(ctx, 0));
    // 0x27471c: 0x3c020034
    ctx->pc = 0x27471cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274720: 0xac40fbd4
    ctx->pc = 0x274720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966228), GPR_U32(ctx, 0));
    // 0x274724: 0x3c020034
    ctx->pc = 0x274724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274728: 0x2403ffff
    ctx->pc = 0x274728u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27472c: 0xac43fbd8
    ctx->pc = 0x27472cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966232), GPR_U32(ctx, 3));
    // 0x274730: 0x3c020034
    ctx->pc = 0x274730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274734: 0xac43fbdc
    ctx->pc = 0x274734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966236), GPR_U32(ctx, 3));
    // 0x274738: 0x3c020034
    ctx->pc = 0x274738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27473c: 0xac43fbe0
    ctx->pc = 0x27473cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966240), GPR_U32(ctx, 3));
    // 0x274740: 0x3c040034
    ctx->pc = 0x274740u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x274744: 0x2402003c
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x274748: 0xac82fbd0
    ctx->pc = 0x274748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966224), GPR_U32(ctx, 2));
    // 0x27474c: 0x3c020034
    ctx->pc = 0x27474cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274750: 0xac43fbc4
    ctx->pc = 0x274750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966212), GPR_U32(ctx, 3));
    // 0x274754: 0x3c020034
    ctx->pc = 0x274754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274758: 0xac40fbe4
    ctx->pc = 0x274758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966244), GPR_U32(ctx, 0));
    // 0x27475c: 0xdfbf0020
    ctx->pc = 0x27475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274760: 0xdfb10010
    ctx->pc = 0x274760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274764: 0xdfb00000
    ctx->pc = 0x274764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274768: 0x3e00008
    ctx->pc = 0x274768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27476Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2746FCu: goto label_2746fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274770u;
}
