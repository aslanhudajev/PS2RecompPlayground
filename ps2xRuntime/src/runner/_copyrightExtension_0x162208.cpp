#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _copyrightExtension
// Address: 0x162208 - 0x1622b4
void _copyrightExtension_0x162208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_copyrightExtension");


    ctx->pc = 0x162208u;

    // 0x162208: 0x27bdffc0
    ctx->pc = 0x162208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16220c: 0x24040001
    ctx->pc = 0x16220cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x162210: 0xffb20020
    ctx->pc = 0x162210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162214: 0xffb10010
    ctx->pc = 0x162214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x162218: 0x3c120023
    ctx->pc = 0x162218u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x16221c: 0xffb00000
    ctx->pc = 0x16221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162220: 0x3c110023
    ctx->pc = 0x162220u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x162224: 0xffbf0030
    ctx->pc = 0x162224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162228: 0xc0585d4
    ctx->pc = 0x162228u;
    SET_GPR_U32(ctx, 31, 0x162230u);
    ctx->pc = 0x16222Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162230u; }
        else if (ctx->pc != 0x162230u) { ctx->pc = 0x162230u; }
    }
    if (ctx->pc != 0x162230u) { return; }
    ctx->pc = 0x162230u;
    // 0x162230: 0x0
    ctx->pc = 0x162230u;
    // NOP
    // 0x162234: 0xc0585d4
    ctx->pc = 0x162234u;
    SET_GPR_U32(ctx, 31, 0x16223Cu);
    ctx->pc = 0x162238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16223Cu; }
        else if (ctx->pc != 0x16223Cu) { ctx->pc = 0x16223Cu; }
    }
    if (ctx->pc != 0x16223Cu) { return; }
    ctx->pc = 0x16223Cu;
    // 0x16223c: 0x3c100023
    ctx->pc = 0x16223cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x162240: 0x0
    ctx->pc = 0x162240u;
    // NOP
    // 0x162244: 0xc0585d4
    ctx->pc = 0x162244u;
    SET_GPR_U32(ctx, 31, 0x16224Cu);
    ctx->pc = 0x162248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16224Cu; }
        else if (ctx->pc != 0x16224Cu) { ctx->pc = 0x16224Cu; }
    }
    if (ctx->pc != 0x16224Cu) { return; }
    ctx->pc = 0x16224Cu;
    // 0x16224c: 0x3c110023
    ctx->pc = 0x16224cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x162250: 0xae02a44c
    ctx->pc = 0x162250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943820), GPR_U32(ctx, 2));
    // 0x162254: 0xc0585d4
    ctx->pc = 0x162254u;
    SET_GPR_U32(ctx, 31, 0x16225Cu);
    ctx->pc = 0x162258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16225Cu; }
        else if (ctx->pc != 0x16225Cu) { ctx->pc = 0x16225Cu; }
    }
    if (ctx->pc != 0x16225Cu) { return; }
    ctx->pc = 0x16225Cu;
    // 0x16225c: 0x3c100023
    ctx->pc = 0x16225cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x162260: 0xc0585d4
    ctx->pc = 0x162260u;
    SET_GPR_U32(ctx, 31, 0x162268u);
    ctx->pc = 0x162264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162268u; }
        else if (ctx->pc != 0x162268u) { ctx->pc = 0x162268u; }
    }
    if (ctx->pc != 0x162268u) { return; }
    ctx->pc = 0x162268u;
    // 0x162268: 0xc0585d4
    ctx->pc = 0x162268u;
    SET_GPR_U32(ctx, 31, 0x162270u);
    ctx->pc = 0x16226Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162270u; }
        else if (ctx->pc != 0x162270u) { ctx->pc = 0x162270u; }
    }
    if (ctx->pc != 0x162270u) { return; }
    ctx->pc = 0x162270u;
    // 0x162270: 0xae22a450
    ctx->pc = 0x162270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943824), GPR_U32(ctx, 2));
    // 0x162274: 0xc0585d4
    ctx->pc = 0x162274u;
    SET_GPR_U32(ctx, 31, 0x16227Cu);
    ctx->pc = 0x162278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16227Cu; }
        else if (ctx->pc != 0x16227Cu) { ctx->pc = 0x16227Cu; }
    }
    if (ctx->pc != 0x16227Cu) { return; }
    ctx->pc = 0x16227Cu;
    // 0x16227c: 0xc0585d4
    ctx->pc = 0x16227Cu;
    SET_GPR_U32(ctx, 31, 0x162284u);
    ctx->pc = 0x162280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162284u; }
        else if (ctx->pc != 0x162284u) { ctx->pc = 0x162284u; }
    }
    if (ctx->pc != 0x162284u) { return; }
    ctx->pc = 0x162284u;
    // 0x162284: 0xae02a454
    ctx->pc = 0x162284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943828), GPR_U32(ctx, 2));
    // 0x162288: 0xc0585d4
    ctx->pc = 0x162288u;
    SET_GPR_U32(ctx, 31, 0x162290u);
    ctx->pc = 0x16228Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162290u; }
        else if (ctx->pc != 0x162290u) { ctx->pc = 0x162290u; }
    }
    if (ctx->pc != 0x162290u) { return; }
    ctx->pc = 0x162290u;
    // 0x162290: 0xc0585d4
    ctx->pc = 0x162290u;
    SET_GPR_U32(ctx, 31, 0x162298u);
    ctx->pc = 0x162294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162298u; }
        else if (ctx->pc != 0x162298u) { ctx->pc = 0x162298u; }
    }
    if (ctx->pc != 0x162298u) { return; }
    ctx->pc = 0x162298u;
    // 0x162298: 0xae42a458
    ctx->pc = 0x162298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943832), GPR_U32(ctx, 2));
    // 0x16229c: 0xdfbf0030
    ctx->pc = 0x16229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1622a0: 0xdfb20020
    ctx->pc = 0x1622a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1622a4: 0xdfb10010
    ctx->pc = 0x1622a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1622a8: 0xdfb00000
    ctx->pc = 0x1622a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1622ac: 0x3e00008
    ctx->pc = 0x1622ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1622B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1622B4u;
}
