#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NewItem
// Address: 0x252fc0 - 0x25309c
void NewItem_0x252fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x252fc0u;

    // 0x252fc0: 0x27bdff70
    ctx->pc = 0x252fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x252fc4: 0xffbf0080
    ctx->pc = 0x252fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x252fc8: 0xffb30070
    ctx->pc = 0x252fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x252fcc: 0xffb20060
    ctx->pc = 0x252fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x252fd0: 0xffb10050
    ctx->pc = 0x252fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x252fd4: 0xffb00040
    ctx->pc = 0x252fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x252fd8: 0x80902d
    ctx->pc = 0x252fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fdc: 0xa0882d
    ctx->pc = 0x252fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fe0: 0xc094baa
    ctx->pc = 0x252FE0u;
    SET_GPR_U32(ctx, 31, 0x252FE8u);
    ctx->pc = 0x252FE4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x252EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewItemPtr_0x252ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252FE8u; }
    }
    if (ctx->pc != 0x252FE8u) { return; }
    ctx->pc = 0x252FE8u;
    // 0x252fe8: 0x40982d
    ctx->pc = 0x252fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fec: 0x86420000
    ctx->pc = 0x252fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x252ff0: 0x4430006
    ctx->pc = 0x252FF0u;
    {
        const bool branch_taken_0x252ff0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x252ff0) {
            ctx->pc = 0x252FF4u;
            SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
            ctx->pc = 0x25300Cu;
            goto label_25300c;
        }
    }
    ctx->pc = 0x252FF8u;
    // 0x252ff8: 0x3c04003b
    ctx->pc = 0x252ff8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x252ffc: 0x24848968
    ctx->pc = 0x252ffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936936));
    // 0x253000: 0xc0b49a6
    ctx->pc = 0x253000u;
    SET_GPR_U32(ctx, 31, 0x253008u);
    ctx->pc = 0x253004u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253008u; }
    }
    if (ctx->pc != 0x253008u) { return; }
    ctx->pc = 0x253008u;
    // 0x253008: 0x3c04003a
    ctx->pc = 0x253008u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_25300c:
    // 0x25300c: 0x24842550
    ctx->pc = 0x25300cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x253010: 0xc0b549e
    ctx->pc = 0x253010u;
    SET_GPR_U32(ctx, 31, 0x253018u);
    ctx->pc = 0x253014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253018u; }
    }
    if (ctx->pc != 0x253018u) { return; }
    ctx->pc = 0x253018u;
    // 0x253018: 0xc60c0000
    ctx->pc = 0x253018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25301c: 0xc0b55da
    ctx->pc = 0x25301Cu;
    SET_GPR_U32(ctx, 31, 0x253024u);
    ctx->pc = 0x253020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5768u;
    {
        const uint32_t __entryPc = ctx->pc;
        WPitchMat3_0x2d5768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253024u; }
    }
    if (ctx->pc != 0x253024u) { return; }
    ctx->pc = 0x253024u;
    // 0x253024: 0xc60c0004
    ctx->pc = 0x253024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x253028: 0xc0b55ae
    ctx->pc = 0x253028u;
    SET_GPR_U32(ctx, 31, 0x253030u);
    ctx->pc = 0x25302Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D56B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WYawMat3_0x2d56b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253030u; }
    }
    if (ctx->pc != 0x253030u) { return; }
    ctx->pc = 0x253030u;
    // 0x253030: 0xc60c0008
    ctx->pc = 0x253030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x253034: 0xc0b5606
    ctx->pc = 0x253034u;
    SET_GPR_U32(ctx, 31, 0x25303Cu);
    ctx->pc = 0x253038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5818u;
    {
        const uint32_t __entryPc = ctx->pc;
        WRollMat3_0x2d5818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25303Cu; }
    }
    if (ctx->pc != 0x25303Cu) { return; }
    ctx->pc = 0x25303Cu;
    // 0x25303c: 0xc6200000
    ctx->pc = 0x25303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253040: 0xe7a00030
    ctx->pc = 0x253040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x253044: 0xc6200004
    ctx->pc = 0x253044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253048: 0xe7a00034
    ctx->pc = 0x253048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25304c: 0xc6200008
    ctx->pc = 0x25304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253050: 0xe7a00038
    ctx->pc = 0x253050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x253054: 0x3c030032
    ctx->pc = 0x253054u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x253058: 0x86460000
    ctx->pc = 0x253058u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25305c: 0x24020050
    ctx->pc = 0x25305cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x253060: 0xc23018
    ctx->pc = 0x253060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x253064: 0x8c62fa60
    ctx->pc = 0x253064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
    // 0x253068: 0x260202d
    ctx->pc = 0x253068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25306c: 0x240282d
    ctx->pc = 0x25306cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253070: 0xc23021
    ctx->pc = 0x253070u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x253074: 0xc094630
    ctx->pc = 0x253074u;
    SET_GPR_U32(ctx, 31, 0x25307Cu);
    ctx->pc = 0x253078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2518C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetItem_0x2518c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25307Cu; }
    }
    if (ctx->pc != 0x25307Cu) { return; }
    ctx->pc = 0x25307Cu;
    // 0x25307c: 0x260102d
    ctx->pc = 0x25307cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253080: 0xdfbf0080
    ctx->pc = 0x253080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253084: 0xdfb30070
    ctx->pc = 0x253084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253088: 0xdfb20060
    ctx->pc = 0x253088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25308c: 0xdfb10050
    ctx->pc = 0x25308cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253090: 0xdfb00040
    ctx->pc = 0x253090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253094: 0x3e00008
    ctx->pc = 0x253094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25300Cu: goto label_25300c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25309Cu;
}
