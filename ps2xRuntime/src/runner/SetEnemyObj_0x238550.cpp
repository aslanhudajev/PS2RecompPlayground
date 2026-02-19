#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetEnemyObj
// Address: 0x238550 - 0x2387dc
void SetEnemyObj_0x238550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x238550u;

    // 0x238550: 0x27bdffb0
    ctx->pc = 0x238550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x238554: 0xffbf0040
    ctx->pc = 0x238554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x238558: 0xffb30030
    ctx->pc = 0x238558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23855c: 0xffb20020
    ctx->pc = 0x23855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x238560: 0xffb10010
    ctx->pc = 0x238560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238564: 0xffb00000
    ctx->pc = 0x238564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238568: 0x80882d
    ctx->pc = 0x238568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23856c: 0xa0902d
    ctx->pc = 0x23856cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238570: 0x8e230000
    ctx->pc = 0x238570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238574: 0x2402001b
    ctx->pc = 0x238574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x238578: 0x14620005
    ctx->pc = 0x238578u;
    {
        const bool branch_taken_0x238578 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23857Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x238578) {
            ctx->pc = 0x238590u;
            goto label_238590;
        }
    }
    ctx->pc = 0x238580u;
    // 0x238580: 0x8e240070
    ctx->pc = 0x238580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x238584: 0x282d
    ctx->pc = 0x238584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238588: 0xc09ea22
    ctx->pc = 0x238588u;
    SET_GPR_U32(ctx, 31, 0x238590u);
    ctx->pc = 0x23858Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x27A888u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxDeleteParented_0x27a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238590u; }
    }
    if (ctx->pc != 0x238590u) { return; }
    ctx->pc = 0x238590u;
label_238590:
    // 0x238590: 0x8e220080
    ctx->pc = 0x238590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x238594: 0x50400004
    ctx->pc = 0x238594u;
    {
        const bool branch_taken_0x238594 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x238594) {
            ctx->pc = 0x238598u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x2385A8u;
            goto label_2385a8;
        }
    }
    ctx->pc = 0x23859Cu;
    // 0x23859c: 0xc08496c
    ctx->pc = 0x23859Cu;
    SET_GPR_U32(ctx, 31, 0x2385A4u);
    ctx->pc = 0x2385A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2385A4u; }
    }
    if (ctx->pc != 0x2385A4u) { return; }
    ctx->pc = 0x2385A4u;
    // 0x2385a4: 0x8e240070
    ctx->pc = 0x2385a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2385a8:
    // 0x2385a8: 0x10800006
    ctx->pc = 0x2385A8u;
    {
        const bool branch_taken_0x2385a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2385ACu;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        if (branch_taken_0x2385a8) {
            ctx->pc = 0x2385C4u;
            goto label_2385c4;
        }
    }
    ctx->pc = 0x2385B0u;
    // 0x2385b0: 0x24020001
    ctx->pc = 0x2385b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2385b4: 0xae024644
    ctx->pc = 0x2385b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17988), GPR_U32(ctx, 2));
    // 0x2385b8: 0xc0b3f1a
    ctx->pc = 0x2385B8u;
    SET_GPR_U32(ctx, 31, 0x2385C0u);
    ctx->pc = 0x2385BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2385C0u; }
    }
    if (ctx->pc != 0x2385C0u) { return; }
    ctx->pc = 0x2385C0u;
    // 0x2385c0: 0xae004644
    ctx->pc = 0x2385c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17988), GPR_U32(ctx, 0));
label_2385c4:
    // 0x2385c4: 0xae200080
    ctx->pc = 0x2385c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x2385c8: 0xae200070
    ctx->pc = 0x2385c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x2385cc: 0x2402001f
    ctx->pc = 0x2385ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x2385d0: 0x1642000e
    ctx->pc = 0x2385D0u;
    {
        const bool branch_taken_0x2385d0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2385D4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
        if (branch_taken_0x2385d0) {
            ctx->pc = 0x23860Cu;
            goto label_23860c;
        }
    }
    ctx->pc = 0x2385D8u;
    // 0x2385d8: 0x3c020034
    ctx->pc = 0x2385d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2385dc: 0x8c44cda0
    ctx->pc = 0x2385dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x2385e0: 0x3c05003a
    ctx->pc = 0x2385e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2385e4: 0x24a57b00
    ctx->pc = 0x2385e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31488));
    // 0x2385e8: 0x26260080
    ctx->pc = 0x2385e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 128));
    // 0x2385ec: 0xa0382d
    ctx->pc = 0x2385ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385f0: 0xc084832
    ctx->pc = 0x2385F0u;
    SET_GPR_U32(ctx, 31, 0x2385F8u);
    ctx->pc = 0x2385F4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x2120C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeListInit_0x2120c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2385F8u; }
    }
    if (ctx->pc != 0x2385F8u) { return; }
    ctx->pc = 0x2385F8u;
    // 0x2385f8: 0xae220080
    ctx->pc = 0x2385f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x2385fc: 0x3c014040
    ctx->pc = 0x2385fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x238600: 0x44810000
    ctx->pc = 0x238600u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x238604: 0x10000012
    ctx->pc = 0x238604u;
    {
        const bool branch_taken_0x238604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238608u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
        if (branch_taken_0x238604) {
            ctx->pc = 0x238650u;
            goto label_238650;
        }
    }
    ctx->pc = 0x23860Cu;
label_23860c:
    // 0x23860c: 0x3c020033
    ctx->pc = 0x23860cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238610: 0x24423c08
    ctx->pc = 0x238610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15368));
    // 0x238614: 0x121880
    ctx->pc = 0x238614u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x238618: 0x628021
    ctx->pc = 0x238618u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23861c: 0x8e020000
    ctx->pc = 0x23861cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238620: 0x1040000b
    ctx->pc = 0x238620u;
    {
        const bool branch_taken_0x238620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238624u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x238620) {
            ctx->pc = 0x238650u;
            goto label_238650;
        }
    }
    ctx->pc = 0x238628u;
    // 0x238628: 0x260282d
    ctx->pc = 0x238628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23862c: 0xc08dc1c
    ctx->pc = 0x23862Cu;
    SET_GPR_U32(ctx, 31, 0x238634u);
    ctx->pc = 0x238630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x237070u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyDesc_0x237070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238634u; }
    }
    if (ctx->pc != 0x238634u) { return; }
    ctx->pc = 0x238634u;
    // 0x238634: 0x8e040000
    ctx->pc = 0x238634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238638: 0x40282d
    ctx->pc = 0x238638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23863c: 0x26260080
    ctx->pc = 0x23863cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 128));
    // 0x238640: 0x40382d
    ctx->pc = 0x238640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238644: 0xc084832
    ctx->pc = 0x238644u;
    SET_GPR_U32(ctx, 31, 0x23864Cu);
    ctx->pc = 0x238648u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x2120C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeListInit_0x2120c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23864Cu; }
    }
    if (ctx->pc != 0x23864Cu) { return; }
    ctx->pc = 0x23864Cu;
    // 0x23864c: 0xae220080
    ctx->pc = 0x23864cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_238650:
    // 0x238650: 0x8e220080
    ctx->pc = 0x238650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x238654: 0x10400012
    ctx->pc = 0x238654u;
    {
        const bool branch_taken_0x238654 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238658u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x238654) {
            ctx->pc = 0x2386A0u;
            goto label_2386a0;
        }
    }
    ctx->pc = 0x23865Cu;
    // 0x23865c: 0x8c44463c
    ctx->pc = 0x23865cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 17980)));
    // 0x238660: 0x3c05003a
    ctx->pc = 0x238660u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x238664: 0x24a52550
    ctx->pc = 0x238664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x238668: 0xc0b3ec0
    ctx->pc = 0x238668u;
    SET_GPR_U32(ctx, 31, 0x238670u);
    ctx->pc = 0x23866Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238670u; }
    }
    if (ctx->pc != 0x238670u) { return; }
    ctx->pc = 0x238670u;
    // 0x238670: 0xae220070
    ctx->pc = 0x238670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x238674: 0x8e230080
    ctx->pc = 0x238674u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x238678: 0x8c640000
    ctx->pc = 0x238678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23867c: 0xc0b3f94
    ctx->pc = 0x23867Cu;
    SET_GPR_U32(ctx, 31, 0x238684u);
    ctx->pc = 0x238680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238684u; }
    }
    if (ctx->pc != 0x238684u) { return; }
    ctx->pc = 0x238684u;
    // 0x238684: 0x26240080
    ctx->pc = 0x238684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    // 0x238688: 0x262500e8
    ctx->pc = 0x238688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 232));
    // 0x23868c: 0x3c060034
    ctx->pc = 0x23868cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x238690: 0xc09de38
    ctx->pc = 0x238690u;
    SET_GPR_U32(ctx, 31, 0x238698u);
    ctx->pc = 0x238694u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967096));
    ctx->pc = 0x2778E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitActions_0x2778e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238698u; }
    }
    if (ctx->pc != 0x238698u) { return; }
    ctx->pc = 0x238698u;
    // 0x238698: 0x10000007
    ctx->pc = 0x238698u;
    {
        const bool branch_taken_0x238698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23869Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        if (branch_taken_0x238698) {
            ctx->pc = 0x2386B8u;
            goto label_2386b8;
        }
    }
    ctx->pc = 0x2386A0u;
label_2386a0:
    // 0x2386a0: 0x202d
    ctx->pc = 0x2386a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386a4: 0x262500e8
    ctx->pc = 0x2386a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 232));
    // 0x2386a8: 0x3c060034
    ctx->pc = 0x2386a8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x2386ac: 0xc09de38
    ctx->pc = 0x2386ACu;
    SET_GPR_U32(ctx, 31, 0x2386B4u);
    ctx->pc = 0x2386B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967096));
    ctx->pc = 0x2778E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitActions_0x2778e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2386B4u; }
    }
    if (ctx->pc != 0x2386B4u) { return; }
    ctx->pc = 0x2386B4u;
    // 0x2386b4: 0x8e220070
    ctx->pc = 0x2386b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2386b8:
    // 0x2386b8: 0x54400012
    ctx->pc = 0x2386B8u;
    {
        const bool branch_taken_0x2386b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2386b8) {
            ctx->pc = 0x2386BCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->pc = 0x238704u;
            goto label_238704;
        }
    }
    ctx->pc = 0x2386C0u;
    // 0x2386c0: 0x240202d
    ctx->pc = 0x2386c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386c4: 0x260282d
    ctx->pc = 0x2386c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386c8: 0xc08dc1c
    ctx->pc = 0x2386C8u;
    SET_GPR_U32(ctx, 31, 0x2386D0u);
    ctx->pc = 0x2386CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x237070u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyDesc_0x237070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2386D0u; }
    }
    if (ctx->pc != 0x2386D0u) { return; }
    ctx->pc = 0x2386D0u;
    // 0x2386d0: 0x3c030033
    ctx->pc = 0x2386d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x2386d4: 0x40202d
    ctx->pc = 0x2386d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386d8: 0x3c05003a
    ctx->pc = 0x2386d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2386dc: 0x24a52550
    ctx->pc = 0x2386dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x2386e0: 0x8c66463c
    ctx->pc = 0x2386e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 17980)));
    // 0x2386e4: 0xc0b1b04
    ctx->pc = 0x2386E4u;
    SET_GPR_U32(ctx, 31, 0x2386ECu);
    ctx->pc = 0x2386E8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2386ECu; }
    }
    if (ctx->pc != 0x2386ECu) { return; }
    ctx->pc = 0x2386ECu;
    // 0x2386ec: 0xae220070
    ctx->pc = 0x2386ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x2386f0: 0x40202d
    ctx->pc = 0x2386f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386f4: 0x24050800
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2386f8: 0xc0b41b8
    ctx->pc = 0x2386F8u;
    SET_GPR_U32(ctx, 31, 0x238700u);
    ctx->pc = 0x2386FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238700u; }
    }
    if (ctx->pc != 0x238700u) { return; }
    ctx->pc = 0x238700u;
    // 0x238700: 0x8e2401f0
    ctx->pc = 0x238700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_238704:
    // 0x238704: 0x50800005
    ctx->pc = 0x238704u;
    {
        const bool branch_taken_0x238704 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x238704) {
            ctx->pc = 0x238708u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x23871Cu;
            goto label_23871c;
        }
    }
    ctx->pc = 0x23870Cu;
    // 0x23870c: 0xc0b3f1a
    ctx->pc = 0x23870Cu;
    SET_GPR_U32(ctx, 31, 0x238714u);
    ctx->pc = 0x238710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238714u; }
    }
    if (ctx->pc != 0x238714u) { return; }
    ctx->pc = 0x238714u;
    // 0x238714: 0xae2001f0
    ctx->pc = 0x238714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x238718: 0x8e230000
    ctx->pc = 0x238718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23871c:
    // 0x23871c: 0x2402001e
    ctx->pc = 0x23871cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x238720: 0x10620028
    ctx->pc = 0x238720u;
    {
        const bool branch_taken_0x238720 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x238724u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x238720) {
            ctx->pc = 0x2387C4u;
            goto label_2387c4;
        }
    }
    ctx->pc = 0x238728u;
    // 0x238728: 0x10600026
    ctx->pc = 0x238728u;
    {
        const bool branch_taken_0x238728 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x23872Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x238728) {
            ctx->pc = 0x2387C4u;
            goto label_2387c4;
        }
    }
    ctx->pc = 0x238730u;
    // 0x238730: 0x10620024
    ctx->pc = 0x238730u;
    {
        const bool branch_taken_0x238730 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x238734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x238730) {
            ctx->pc = 0x2387C4u;
            goto label_2387c4;
        }
    }
    ctx->pc = 0x238738u;
    // 0x238738: 0x10620022
    ctx->pc = 0x238738u;
    {
        const bool branch_taken_0x238738 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23873Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x238738) {
            ctx->pc = 0x2387C4u;
            goto label_2387c4;
        }
    }
    ctx->pc = 0x238740u;
    // 0x238740: 0x24633cc0
    ctx->pc = 0x238740u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15552));
    // 0x238744: 0x121080
    ctx->pc = 0x238744u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x238748: 0x431021
    ctx->pc = 0x238748u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23874c: 0x1a600006
    ctx->pc = 0x23874Cu;
    {
        const bool branch_taken_0x23874c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x238750u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x23874c) {
            ctx->pc = 0x238768u;
            goto label_238768;
        }
    }
    ctx->pc = 0x238754u;
    // 0x238754: 0x2a630004
    ctx->pc = 0x238754u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 4));
    // 0x238758: 0x24020003
    ctx->pc = 0x238758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23875c: 0x263100b
    ctx->pc = 0x23875cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
    // 0x238760: 0x10000002
    ctx->pc = 0x238760u;
    {
        const bool branch_taken_0x238760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238764u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x238760) {
            ctx->pc = 0x23876Cu;
            goto label_23876c;
        }
    }
    ctx->pc = 0x238768u;
label_238768:
    // 0x238768: 0x102d
    ctx->pc = 0x238768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23876c:
    // 0x23876c: 0x3c030033
    ctx->pc = 0x23876cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x238770: 0x2463ded0
    ctx->pc = 0x238770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958800));
    // 0x238774: 0x21080
    ctx->pc = 0x238774u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x238778: 0x431021
    ctx->pc = 0x238778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23877c: 0x8c440000
    ctx->pc = 0x23877cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238780: 0xc0282d
    ctx->pc = 0x238780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238784: 0xc0b19fe
    ctx->pc = 0x238784u;
    SET_GPR_U32(ctx, 31, 0x23878Cu);
    ctx->pc = 0x238788u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23878Cu; }
    }
    if (ctx->pc != 0x23878Cu) { return; }
    ctx->pc = 0x23878Cu;
    // 0x23878c: 0x40202d
    ctx->pc = 0x23878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238790: 0x3c05003a
    ctx->pc = 0x238790u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x238794: 0x24a52550
    ctx->pc = 0x238794u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x238798: 0x302d
    ctx->pc = 0x238798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23879c: 0xc0b2236
    ctx->pc = 0x23879Cu;
    SET_GPR_U32(ctx, 31, 0x2387A4u);
    ctx->pc = 0x2387A0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2387A4u; }
    }
    if (ctx->pc != 0x2387A4u) { return; }
    ctx->pc = 0x2387A4u;
    // 0x2387a4: 0xae2201f0
    ctx->pc = 0x2387a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 2));
    // 0x2387a8: 0x3c014040
    ctx->pc = 0x2387a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2387ac: 0x44810000
    ctx->pc = 0x2387acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2387b0: 0xe4400054
    ctx->pc = 0x2387b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2387b4: 0x8e2301f0
    ctx->pc = 0x2387b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x2387b8: 0x2402ffe0
    ctx->pc = 0x2387b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2387bc: 0xa4620068
    ctx->pc = 0x2387bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x2387c0: 0xdfbf0040
    ctx->pc = 0x2387c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2387c4:
    // 0x2387c4: 0xdfb30030
    ctx->pc = 0x2387c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2387c8: 0xdfb20020
    ctx->pc = 0x2387c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2387cc: 0xdfb10010
    ctx->pc = 0x2387ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2387d0: 0xdfb00000
    ctx->pc = 0x2387d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2387d4: 0x3e00008
    ctx->pc = 0x2387D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2387D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238590u: goto label_238590;
            case 0x2385A8u: goto label_2385a8;
            case 0x2385C4u: goto label_2385c4;
            case 0x23860Cu: goto label_23860c;
            case 0x238650u: goto label_238650;
            case 0x2386A0u: goto label_2386a0;
            case 0x2386B8u: goto label_2386b8;
            case 0x238704u: goto label_238704;
            case 0x23871Cu: goto label_23871c;
            case 0x238768u: goto label_238768;
            case 0x23876Cu: goto label_23876c;
            case 0x2387C4u: goto label_2387c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2387DCu;
}
